import React from 'react'
import { memo } from 'react';

const Navbar = ({adjective, getAdjective}) => {
    console.log("Navbar is rendering");
  return (
    <div>
      I am a {adjective} Navbar.
      <button onClick={ ()=> {getAdjective()}}>{getAdjective()}</button>
    </div>
  )
}

export default memo(Navbar)

// jb naye props aaye to rerender ho jao but purane props ho to rerender mt ho -- memo 
