import { useState } from "react";
import "./App.css";

function App() {
  const [count, setCount] = useState(0);
  const [showbtn, setshowbtn] = useState(true);

  const [todos, settodos] = useState([
    {
      title: "First Todo",
      desc: "I am a First Todo",
    },
    {
      title: "Second Todo",
      desc: "I am a Second Todo",
    },
    {
      title: "Third Todo",
      desc: "I am a Third Todo",
    },
    {
      title: "Fourth Todo",
      desc: "I am a Fourth Todo",
    },
  ]);

  // We can create multiple component inside a component like this
  // const Todo = ({ todo }) => {
  //   return (
  //     <div className="m-5 border border-1 border-purple-800">
  //       <div className="todo">{todo.title}</div>
  //       <div className="todo">{todo.desc}</div>
  //     </div>
  //   );
  // };

  return (
    <>
      {showbtn ? <button>showbtn is True</button> : "showbtn is False"}
      {/* here is the more simplyfied form of above things */}
      {/* We can simply use && operator */}
      {/* {showbtn && <button>showbtn is True</button>} */}

      {/* Rendering Lists in React  */}
      {todos.map((todo) => {
        // return <Todo key={todo.title} todo={todo} />;
        return (
          <div key={todo.title} className="m-5 border border-1 border-purple-800">
            <div className="todo">{todo.title}</div>
            <div className="todo">{todo.desc}</div>
          </div>
        );
      })}

      <div className="card">
        <button onClick={() => setshowbtn(!showbtn)}>Toggle Showbtn</button>
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
