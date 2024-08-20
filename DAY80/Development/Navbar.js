import React from 'react'

const Navbar = () => {
  return (
    <nav className='bg-blue-950 flex items-center justify-between text-white h-16'>
        <div className="logo font-bold mx-8">GetMeAChai</div>
        <ul className='flex gap-5 mx-8'>
            <li className='hover:font-bold'><a href="#">Home</a></li>
            <li className='hover:font-bold'><a href="#">About</a></li>
            <li className='hover:font-bold'><a href="#">Projects</a></li>
            <li className='hover:font-bold'><a href="#">Login</a></li>
            <li className='hover:font-bold'><a href="#">SignUp</a></li>
        </ul>
    </nav>
  )
}

export default Navbar
