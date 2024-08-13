import React from "react";
import { useRef } from "react";

const Manager = () => {
  const ref = useRef();
  const showPassword = () => {
    alert("Show the Password")
    if(ref.current.src.includes("icons/hidden.png")){
      ref.current.src = "icons/eye.png"
    }
    else{
      ref.current.src = "icons/hidden.png"
    } 
  }
  return (
    <>
      <div className="absolute top-0 z-[-2] h-screen w-screen bg-white bg-[radial-gradient(ellipse_80%_80%_at_50%_-20%,rgba(120,119,198,0.3),rgba(255,255,255,0))]"></div>

      <div className="mycontainer">
        <h1 className="text-4xl font-bold text-center">
          <span className="text-green-700">&lt;</span>
          Safe
          <span className="text-green-700">Key&gt;</span>
        </h1>
        <p className="text-green-800 text-lg text-center">
          Your Own PassWord Manager
        </p>
        <div className="flex flex-col p-4 text-black gap-8 items-center">
          <input
            className="rounded-full border border-green-600 w-full p-4 py-1"
            type="text"
            placeholder="Enter Website URL"
            name=""
            id=""
          />
          <div className="flex w-full justify-between gap-8">
            <input
              className="rounded-full border border-green-600 w-full p-4 py-1"
              placeholder="Enter User Name"
              type="text"
              name=""
              id=""
            />
            <div className="relative">
              <input
                className="rounded-full border border-green-600 w-full p-4 py-1"
                placeholder="Enter Password"
                type="text"
                name=""
                id=""
              />
              <span className="absolute right-[3px] top-[3px] cursor-pointer" onClick={showPassword}>
                <img ref={ref} className="p-1" width={26} src="icons/eye.png" alt="eye button" />
              </span>
            </div>
          </div>
          <button
            className="bg-green-500 hover:bg-green-800 text-white font-bold py-2 px-4 rounded-3xl flex items-center justify-center w-fit gap-2 border-2 border-green-700"
          >
            <lord-icon
              src="https://cdn.lordicon.com/jgnvfzqg.json"
              trigger="hover"
            >
            </lord-icon>
            Add Password
          </button>
        </div>
      </div>
    </>
  );
};

export default Manager;