import { useState } from 'react'
import './App.css'

function App() {
  // const [form, setForm] = useState({email: "", phone: ""})
  const [form, setForm] = useState({})

  const handleClick = () =>{
    alert("I am Clicked")
  }
  const mouseOver = () =>{
    alert("Mouse is on this div now")
  }

  const handleChange = (e) =>{
    setForm({...form, [e.target.name]:e.target.value})
    console.log(form)
  }

  return (
    <>
      <div>
        <button onClick={handleClick}>Click Here</button>
      </div>

      {/* <div className='red' onMouseOver={mouseOver}>
        Mouse Over Me
      </div> */}

      {/* <input type="email" name='email' value={form.email} onChange={handleChange} />
      <input type="phone" name='phone' value={form.phone} onChange={handleChange} /> */}
      <input type="email" name='email' value={form.email? form.email: ""} onChange={handleChange} />
      <input type="phone" name='phone' value={form.phone? form.phone: ""} onChange={handleChange} />
    </>
  )
}

export default App
