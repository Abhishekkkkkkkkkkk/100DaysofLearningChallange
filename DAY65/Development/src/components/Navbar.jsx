import React from 'react'
import { useSelector, useDispatch } from 'react-redux'

const Navbar = () => {
    const count = useSelector((state) => state.counter.value)
  return (
    <div>
      I am a Navbar counter is {count}
    </div>
  )
}
export default Navbar
