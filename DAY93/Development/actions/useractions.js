"use server";

import Razorpay from "razorpay";
import Payment from "@/models/Payment";
import connectDB from "@/db/connectDb";
import User from "@/models/User";
import Username from "@/app/[username]/page";

export const initiate = async (amount, to_username, paymentform) => {
  await connectDB();

  var instance = new Razorpay({
    key_id: process.env.NEXT_PUBLIC_KEY_ID,
    key_secret: process.env.KEY_SECRET,
  })

  let options = {
    amount: Number.parseInt(amount),
    currency: "INR",
  }

  let x = await instance.orders.create(options)

  // Create a payment object which shows a pending payment in the database
  await Payment.create({
    oid: x.id,
    amount: amount,
    to_user: to_username,
    name: paymentform.name,
    message: paymentform.message,
    })
    return x
};

// Create fetch user Function 
export const fetchuser = async (username) => {
  await connectDB();
  let u = await User.findOne({username: username})
  let user = u.toObject({flattenObjectIds: true})
  return user
}


// Create fetch paymnet Function 
export const fetchpayments = async (username) => {
  await connectDB();
  // Find all Payments Sorted by Decreasing order of Amount 
  let p = await Payment.find({to_user: username}).sort({amount: -1}).lean()
  return p 
}

// Create Update Profile Function
export const updateprofile = async (data, oldusername) => {
  await connectDB();
  let ndata = Object.fromEntries(data)

  // if the username being updated, check if username is available
  if (oldusername !== ndata.username){
    let u = await User.findOne({username: ndata.username})
    if (u) {
      return {error: "Username already exists"}
    }
  }
  await User.updateOne({email: ndata.email}, ndata)
} 
