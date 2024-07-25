import { useState, useMemo } from "react";
import "./App.css";

const nums = new Array(30_000_000).fill(0).map((_, i) => {
  return {
    index: i,
    isMagical: i === 29_000_000,
  };
});

function App() {
  const [count, setCount] = useState(0);

  const [numbers, setNummbers] = useState(nums);

  // const magical = numbers.find(item => item.isMagical === true)     //Expensive Computation

  // instead of doing above computation we use useMemo hooks
  const magical = useMemo(
    () => numbers.find((item) => item.isMagical === true),
    [numbers]
  );

  return (
    <>
      <div>
        <span>Magical Number :- {magical.index}</span>
      </div>
      <div className="card">
        <button
          onClick={() => {
            setCount((count) => count + 1);
            if (count == 10) {
              setNummbers(
                new Array(10_000_000).fill(0).map((_, i) => {
                  return {
                    index: i,
                    isMagical: i === 9_000_000,
                  };
                })
              );
            }
          }}
        >
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
  );
}

export default App;
