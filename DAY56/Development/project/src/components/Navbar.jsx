import { useEffect } from "react";
import React from "react";

const Navbar = ({ color }) => {
  // Case 1 :- Run on Every Render
  useEffect(() => {
    alert("Hey, I will run on Every Render");
  });

  // Case 2 :- Run only on First Render
  useEffect(() => {
    alert("This is the First Render");
  }, []);

  // Case 3 :- Run only when Certain Values change
  useEffect(() => {
    alert("I am Changed because color was changed");
  }, [color]);

  //   Example of Cleanup Function 
  useEffect(() => {
    alert("This is the first render of App.jsx")
  
    return () => {
      alert("Component was unmounted")
    }
  }, [])
  


  return <div>I am a navbar of {color} Color.</div>;
};

export default Navbar;
