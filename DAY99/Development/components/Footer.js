import React from 'react'

const Footer = () => {
  const currentYear = new Date().getFullYear();
  return (
    <footer className='bg-gray-900 flex items-center justify-center text-white h-16'>
        <p className='text-center'>Copyright &copy; {currentYear} Get Me A Chai - All Rights Reserved!</p>
    </footer>
  )
}

export default Footer
