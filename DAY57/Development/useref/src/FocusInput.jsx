import {useRef} from 'react'
import './App.css'

export default function Focus() {
    const inputRef = useRef(null);
  
    function handleClick() {
      inputRef.current.focus();
    }
  
    return (
      <>
        <input ref={inputRef} />
        <button onClick={handleClick}>
          Click to Focus on the input
        </button>
      </>
    );
  }
