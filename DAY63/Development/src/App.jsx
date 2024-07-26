import { useState, useCallback } from 'react'
import './App.css'
import Navbar from './components/Navbar'

function App() {
  const [count, setCount] = useState(0)

  const [adjective, setAdjective] = useState("Good")

  // When the component is re render the below function defination is changesd 
  // mtlb jb re render hoga tb ek naya function ban jayega jis se ki navbar ko lagega ki ek naya props aaya hai to wo re render mar dega
  // const getAdjective = () =>{
  //   return "Another"
  //   setAdjective("Another")
  // }

   // const getAdjective = () =>{
  //   return "Another" + count
  // }

  // To make the above function freeze  - we have to use useCallback 
  // const getAdjective = useCallback(() => {
  //   return "Another";
  // }, []);


  // it means ki jb tk count change nhi ho rha hai tb tk function freeze kar do 
  const getAdjective = useCallback(() => {
    return "Another" + count;
  }, [count]);

  

  return (
    <>
    <Navbar adjective={"Good"} getAdjective = {getAdjective} />
      <div>
      </div>
      <h1>Vite + React</h1>
      <div className="card">
        <button onClick={() => setCount((count) => count + 1)}>
          count is {count}
        </button>
        <p>
          Edit <code>src/App.jsx</code> and save to test HMR
        </p>
      </div>
      <p className="read-the-docs">
        Click on the Vite and React logos to learn more
      </p>
    </>
  )
}

export default App
