import "./App.css";
import { useForm } from "react-hook-form";

function App() {
  const {
    register,
    handleSubmit,
    setError,
    formState: { errors, isSubmitting },
  } = useForm();

  const delay = (d) => {
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        resolve();
      }, d * 1000);
    });
  };

  const onSubmit = async (data) => {
    // await delay(2) // simulating network delay
    let r = await fetch("http://localhost:3000/", {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
      },
      body: JSON.stringify(data),
    });
    let res = await r.text();
    console.log(data, res);
    // if(data.username !== "Abhishek"){
    //   setError("myform", {message: "This form is not in a good order because creadential are invalid"})
    // }
    // if(data.username === "Adwitiya"){
    //   setError("blocked", {message: "This user name is Blocked"})
    // }
  };

  return (
    <>
      {isSubmitting && <div>Loding...</div>}
      <div className="container">
        <form onSubmit={handleSubmit(onSubmit)}>
          <input
            placeholder="username"
            {...register("username", {
              required: { value: true, message: "This field is Required" },
              minLength: { value: 3, message: "Min Length is 3" },
              maxLength: { value: 10, message: "Max Length is 10" },
            })}
          />
          {errors.username && <div>{errors.username.message}</div>}
          <br />
          <input
            placeholder="password"
            {...register("password", {
              minLength: { value: 6, message: "Min Length of Password is 6" },
            })}
          />
          {errors.password && <div>{errors.password.message}</div>}
          <br />
          <input disabled={isSubmitting} type="submit" value="submit" />
          {errors.myform && <div>{errors.myform.message}</div>}
          {errors.blocked && <div>{errors.blocked.message}</div>}
        </form>
      </div>
    </>
  );
}

export default App;
