import React from "react";
import { useRef, useState, useEffect } from "react";

const Manager = () => {
  const ref = useRef();
  const [form, setform] = useState({ site: "", username: "", password: "" });
  const [passwordArray, setpasswordArray] = useState([]);

  useEffect(() => {
    let passwords = localStorage.getItem("passwords");
    if (passwords) {
      setpasswordArray(JSON.parse(passwords));
    }
  }, []);

  const showPassword = () => {
    alert("Show the Password");
    if (ref.current.src.includes("icons/hidden.png")) {
      ref.current.src = "icons/eye.png";
    } else {
      ref.current.src = "icons/hidden.png";
    }
  };

  const savePassword = () => {
    setpasswordArray([...passwordArray, form]);
    localStorage.setItem("passwords", JSON.stringify([...passwordArray, form]));
    console.log([...passwordArray, form]);
  };
  const handleChange = (e) => {
    setform({ ...form, [e.target.name]: e.target.value });
  };

  return (
    <>
      <div className="absolute top-0 z-[-2] h-screen w-screen bg-white bg-[radial-gradient(ellipse_80%_80%_at_50%_-20%,rgba(120,119,198,0.3),rgba(255,255,255,0))]"></div>

      <div className="mycontainer">
        <h1 className="text-4xl font-bold text-center">
          <span className="text-green-700">&lt;</span>
          Safe
          <span className="text-green-700">Key&gt;</span>
        </h1>
        <p className="text-green-800 text-lg text-center">
          Your Own PassWord Manager
        </p>
        <div className="flex flex-col p-4 text-black gap-8 items-center">
          <input
            value={form.site}
            onChange={handleChange}
            className="rounded-full border border-green-600 w-full p-4 py-1"
            type="text"
            placeholder="Enter Website URL"
            name="site"
            id=""
          />
          <div className="flex w-full justify-between gap-8">
            <input
              value={form.username}
              onChange={handleChange}
              className="rounded-full border border-green-600 w-full p-4 py-1"
              placeholder="Enter User Name"
              type="text"
              name="username"
              id=""
            />
            <div className="relative">
              <input
                value={form.password}
                onChange={handleChange}
                className="rounded-full border border-green-600 w-full p-4 py-1"
                placeholder="Enter Password"
                type="text"
                name="password"
                id=""
              />
              <span
                className="absolute right-[3px] top-[3px] cursor-pointer"
                onClick={showPassword}
              >
                <img
                  ref={ref}
                  className="p-1"
                  width={26}
                  src="icons/eye.png"
                  alt="eye button"
                />
              </span>
            </div>
          </div>
          <button
            onClick={savePassword}
            className="bg-green-500 hover:bg-green-800 text-white font-bold py-2 px-4 rounded-3xl flex items-center justify-center w-fit gap-2 border-2 border-green-700"
          >
            <lord-icon
              src="https://cdn.lordicon.com/jgnvfzqg.json"
              trigger="hover"
            ></lord-icon>
            Add Password
          </button>
        </div>
        <div className="passwords">
          <h2 className="font-bold text-2xl py-4">Your Password</h2>
          {passwordArray.length === 0 && <div>No Password to Show</div>}
          {passwordArray.length != 0 && <table className="table-auto w-full rounded-md overflow-hidden">
            <thead className="bg-green-600 text-white">
              <tr>
                <th className="py-2">Site</th>
                <th className="py-2">Username</th>
                <th className="py-2">Password</th>
              </tr>
            </thead>
            <tbody className="bg-green-100">
              {passwordArray.map((item, index) => {
                return <tr key={index}>
                <td className="py-2 border border-white text-center w-32"> <a href={item.site} target="_blank">{item.site}</a></td>
                <td className="py-2 border border-white text-center w-32">{item.username}</td>
                <td className="py-2 border border-white text-center w-32">{item.password}</td>
              </tr>
              })}
              
            </tbody>
          </table>}
        </div>
      </div>
    </>
  );
};

export default Manager;
