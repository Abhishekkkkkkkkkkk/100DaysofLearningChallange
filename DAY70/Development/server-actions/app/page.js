"use client"
import { submitAction } from "@/actions/form";
import { useRef } from "react";

export default function Home() {
  let ref = useRef()

  return (
    <div className="flex justify-center">
      <form ref={ref} action={(e) => {submitAction(e); ref.current.reset()}} className="bg-slate-100 p-32" >
        <div>
          <label htmlFor="name">Username: </label>
          <input type="text" name="name" id="name" className="text-black bg-gray-300" />
        </div>
        <div>
          <label htmlFor="add">Address: </label>
          <input type="text" name="add" id="add" className="text-black bg-gray-300 mt-4" />
        </div>
        <div>
        <button className="bg-red-950 p-2 w-20 rounded-lg mt-5 ml-28 text-white">Submit</button>
        </div>
      </form>
    </div>
  );
}
