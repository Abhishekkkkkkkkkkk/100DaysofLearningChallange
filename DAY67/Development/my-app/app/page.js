// "use client"
// import { useState } from "react";
import fs from "fs/promises"
import Navbar from "@/components/Navbar"

export default function Home() {
  // const [count, setCount] = useState(0)
  console.log("Hey I am Abhishek")

  let a = fs.readFile("data.json")
  a.then(e =>{console.log(e.toString())})
  return (
    <div>
      <Navbar />
      I am a Component.
      {/* {count} */}
      {/* <button className="bg-slate-600 " onClick={() => setCount(count + 1)}>Click me</button> */}
    </div>
  );
}
