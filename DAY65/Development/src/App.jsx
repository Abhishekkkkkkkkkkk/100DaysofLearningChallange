import './App.css'
import Navbar from './components/Navbar'
import { useSelector, useDispatch } from 'react-redux'
import { decrement, increment } from './redux/counter/counterSlice'

function App() {
  const count = useSelector((state) => state.counter.value)
  const dispatch = useDispatch()

  return (
    <>
    <Navbar />
      <div className='container'>
        <button className='btn' onClick={() => dispatch(decrement())}>-</button>
        <span>{count}</span>
        <button className='btn' onClick={() => dispatch(increment())}>+</button>
      </div>
    </>    
  )
}

export default App
