import React from 'react'
import Link from 'next/link'

const Navbar = () => {
  return (
    <nav className='bg-blue-950 flex items-center justify-between text-white h-16'>
        <div className="logo font-bold mx-8">GetMeAChai</div>
        {/* <ul className='flex gap-5 mx-8'>
            <li className='hover:font-bold'><a href="#">Home</a></li>
            <li className='hover:font-bold'><a href="#">About</a></li>
            <li className='hover:font-bold'><a href="#">Projects</a></li>
            <li className='hover:font-bold'><a href="#">Login</a></li>
            <li className='hover:font-bold'><a href="#">SignUp</a></li>
        </ul> */}
        <div>
          <Link href={"/login"}>
        <button type="button" class="text-white bg-gradient-to-br from-purple-600 to-blue-500 hover:bg-gradient-to-bl focus:ring-4 focus:outline-none focus:ring-blue-300 dark:focus:ring-blue-800 font-medium rounded-lg text-sm px-5 py-2.5 text-center me-2 mb-2">Login</button></Link>
        </div>
    </nav>
  )
}

export default Navbar
