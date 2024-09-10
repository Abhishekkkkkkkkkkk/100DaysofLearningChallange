"use client";
import React, { useEffect, useState } from "react";
import Script from "next/script";
import { useSession } from "next-auth/react";
import { fetchuser, fetchpayments, initiate } from "@/actions/useractions";
import { useSearchParams } from "next/navigation";
import { ToastContainer, toast } from "react-toastify";
import "react-toastify/dist/ReactToastify.css";
import { Bounce } from "react-toastify";
import { useRouter } from "next/navigation";

const PaymentPage = ({ username }) => {
  const { data: session } = useSession(); // Retrieve the session object

  const [paymentform, setPaymentform] = useState({});
  const [currentUser, setcurrentUser] = useState({});
  const [payments, setPayments] = useState([]);
  const searchParams = useSearchParams();
  const router = useRouter();

  useEffect(() => {
    getData();
  }, []);

  useEffect(() => {
    if (searchParams.get("paymentdone") == true) {
      toast("Thanks for Your Support!", {
        position: "top-right",
        autoClose: 5000,
        hideProgressBar: false,
        closeOnClick: true,
        pauseOnHover: true,
        draggable: true,
        progress: undefined,
        theme: "light",
        transition: Bounce,
      });
    }
    router.push(`/${username}`);
  }, []);

  const handleChange = (e) => {
    setPaymentform({ ...paymentform, [e.target.name]: e.target.value });
  };

  const getData = async () => {
    let u = await fetchuser(username);
    setcurrentUser(u);
    let dbpayments = await fetchpayments(username);
    setPaymentform(dbpayments);
    console.log(u, dbpayments);
  };

  const pay = async (amount) => {
    if (!session) {
      console.error("No session found");
      return;
    }

    // Get the order id
    let a = await initiate(amount, username, paymentform);
    let orderId = a.id;

    var options = {
      key: currentUser.razorpayid, // Enter the Key ID generated from the Dashboard
      amount: amount, // Amount is in currency subunits. Default currency is INR. Hence, 50000 refers to 50000 paise
      currency: "INR",
      name: "Get Me A Chai", // Your business name
      description: "Test Transaction",
      image: "https://example.com/your_logo",
      order_id: orderId, // This is a sample Order ID. Pass the `id` obtained in the response of Step 1
      callback_url: `${process.env.NEXT_PUBLIC_URL}/api/razorpay`,
      prefill: {
        name: session.user.name, // Use session data for pre-filling the name
        email: session.user.email, // Use session data for pre-filling the email
        contact: "9000090000", // Provide the customer's phone number for better conversion rates
      },
      notes: {
        address: "Razorpay Corporate Office",
      },
      theme: {
        color: "#3399cc",
      },
    };
    var rzp1 = new Razorpay(options);
    rzp1.open();
  };
  return (
    <>
      <ToastContainer
        position="top-right"
        autoClose={5000}
        hideProgressBar={false}
        newestOnTop={false}
        closeOnClick
        rtl={false}
        pauseOnFocusLoss
        draggable
        pauseOnHover
        theme="light"
      />
      {/* Same as */}
      <ToastContainer />

      <script src="https://checkout.razorpay.com/v1/checkout.js"></script>

      <div className="cover w-full relative">
        <img
          className="object-cover  h-[400px]"
          src={currentUser.coverpic}
          alt="cover-image"
        />

        <div className="absolute -bottom-16 right-[47%]">
          <img
            className="rounded-full"
            width={100}
            height={100}
            src={currentUser.profilepic}
            alt="profile-pic"
          />
        </div>
      </div>

      <div className="info flex justify-center items-center my-16 mb-32 flex-col gap-2">
        <div className="font-bold text-lg">@{username}</div>
        <div className="text-slate-400">Let help {username} get a chai!</div>
        <div className="text-slate-400">
          {payments.length} Payments . ₹{payments.reduce((a, b) => a + b.amount, 0)} raised
        </div>

        <div className="payment flex gap-3 w-[80%] mt-12">
          <div className="supporter w-1/2 bg-slate-900 rounded-lg text-white p-10">
            <h2 className="text-2xl font-bold my-5">Supporters</h2>
            <ul className="mx-5 text-lg">
              {payments.length == 0 && <li>No Payments Yet</li>}
              {payments.map((p, i) => {
                return (
                  <li key={i} className="my-4 flex gap-2 items-center">
                    <img
                      className="bg-slate-800 rounded-full"
                      width={33}
                      src="avatar.gif"
                      alt="user-avatar"
                    />
                    <span>
                      {p.name} Donated{" "}
                      <span className="font-bold">${p.amount}</span> with a
                      message "{p.message}"
                    </span>
                  </li>
                );
              })}
            </ul>
          </div>
          <div className="makepayment w-1/2 bg-slate-900 rounded-lg text-white p-10">
            <h2 className="text-2xl font-bold my-5">Make a Payment</h2>
            <div className="flex gap-2 flex-col">
              {/* input for name message and amount  */}
              <input
                onChange={handleChange}
                value={paymentform.name}
                type="text"
                name="name"
                className="w-full p-3 rounded-lg bg-slate-800"
                placeholder="Enter Name"
              />
              <input
                onChange={handleChange}
                value={paymentform.message}
                type="text"
                name="message"
                className="w-full p-3 rounded-lg bg-slate-800"
                placeholder="Enter Message"
              />
              <input
                onChange={handleChange}
                value={paymentform.amount}
                type="text"
                name="amount"
                className="w-full p-3 rounded-lg bg-slate-800"
                placeholder="Enter Amount"
              />
              <button
                className="bg-orange-500 hover:bg-orange-700 text-white font-bold py-3 rounded-lg disabled:bg-orange-900"
                disabled={
                  (paymentform.name?.length || 0) < 3 ||
                  (paymentform.message?.length || 0) < 3
                }
                onClick={() => pay(Number.parseInt(paymentform.amount) * 100)}
              >
                Donate
              </button>
            </div>
            {/* Or choose from these Amount  */}
            <div className="flex gap-2 mt-5">
              <button
                className="bg-slate-800 p-3 rounded-lg"
                onClick={() => pay(1000)}
              >
                Donate ₹10
              </button>
              <button
                className="bg-slate-800 p-3 rounded-lg"
                onClick={() => pay(3000)}
              >
                Donate ₹30
              </button>
              <button
                className="bg-slate-800 p-3 rounded-lg"
                onClick={() => pay(5000)}
              >
                Donate ₹50
              </button>
            </div>
          </div>
        </div>
      </div>
    </>
  );
};

export default PaymentPage;
