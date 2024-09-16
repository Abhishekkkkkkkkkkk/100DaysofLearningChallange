import { NextResponse } from "next/server";
import { validatePaymentVerification } from "razorpay/dist/utils/razorpay-utils";
import Payment from "@/models/Payment";
import Razorpay from "razorpay";
import connectDB from "@/db/connectDb";
import Username from "@/app/[username]/page";
import User from "@/models/User";

export const POST = async (req) => {
  await connectDB();
  let body = await req.fornData();
  body = Object.fromEntries(body);

  // check if razorpayOrderId is present on the server
  let p = await Payment.findOne({ oid: body.razorpay_order_id });
  if (!p) {
    return NextResponse.json({ success: false, message: "Order Id not Found" });
  }

  // Fetch the secret of the user who is getting the Payment 
  let user = await User.findOne({ username: p.to_user})
  const secret = user.razoerpaysecret

  // Verify the Payment
  let xx = validatePaymentVerification(
    {
      order_id: body.razorpay_order_id,
      payment_id: body.razorpay_payment_id,
    },
    body.razorpay_signature,
    secret
  );

  if (xx) {
    // Update the payment status
    const updatePayment = await Payment.findOneAndUpdate(
      { oid: body.razorpay_order_id },
      { done: true },
      { new: true }
    );
    return NextResponse.redirect(
      `${process.env.NEXT_PUBLIC_URL}/${updatePayment.to_user}?paymentdone = true`
    );
  } else {
    return new NextResponse.error("Payment failed", 400);
  }
};
