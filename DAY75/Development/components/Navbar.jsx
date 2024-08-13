import React from "react";

const Navbar = () => {
  return (
    <nav className=" bg-purple-200">
      <div className="mycontainer flex  px-32 justify-between items-center h-14 py-4">
        <div className="logo font-bold text-white text-xl">
          <span className="text-green-700">&lt;</span>
          Safe
          <span className="text-green-700">Key&gt;</span>
        </div>
        <ul className="flex gap-4">
          <li className="hover:font-bold">
            <a href="/">Home</a>
          </li>
          <li className="hover:font-bold">
            <a href="/">About</a>
          </li>
          <li className="hover:font-bold">
            <a href="/">Contact</a>
          </li>
        </ul>
      </div>
    </nav>
  );
};

export default Navbar;
