"use client"

export default function Home() {
  const handleClick = async () => {
    let data = {
      "Name": "Abhishek Kumar",
      "Age": 22,
      "City": "Indore"
    }
    let a = await fetch("/api/add", {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
      },
      body: JSON.stringify(data),
    })
    let res = await a.json();
    console.log(res);
  };
  return (
    <div>
      <h1 className="font-bold text-xl">Api Routes Demo in Next Js</h1>
      <button
        className="bg-red-600 rounded-lg p-2 m-2 w-20 text-white hover:bg-slate-600"
        onClick={handleClick}
      >
        Click
      </button>
    </div>
  );
}
