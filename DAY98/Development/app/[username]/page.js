import React from 'react'
import PaymentPage from '@/components/PaymentPage'
import { notFound } from "next/navigation";
import connectDB from '@/db/connectDb';
import User from '@/models/User';

const Username = async ({params}) => {

  // if the username is not present in the database then show a 404 page
  const checkUser = async () => {
    await connectDB()
    let u = await User.findOne({ username: params.username })
    if (!u) {
      return notFound()
    }
  }
  await checkUser()
  
  return (
    <>
    <PaymentPage username = {params.username} />
    </>
  )
}

export default Username

// use dynamic matadata to set page title 
export async function generateMetadata({params}) {
  return{
    title: Support `${params.username} - Get Me A Chai  `
  }
}
