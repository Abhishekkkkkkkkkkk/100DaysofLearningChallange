// function sayName(fname, lname= "Kumar"){
//       console.log("My Name is: ", fname, lname);
// }
// sayName("Abhishek");

// one parameter is depend on another Parameter

// function sayName(fname, lname= fname.toUpperCase()){
//     console.log("My Name is: ", fname, lname);
// }
// sayName("Abhishek");


// Default parameter me object pass karna 

// function solve(value = {age: 20, wt: 60, ht: 160}){
//     console.log("Hello", value);
// }
// solve();

// Default parameter me Array pass karna 

function solve(value = ["a", "b", "c", "d"]){
    console.log("Hello", value);
}
solve();

// In Default parameter  -> Null ke case me null print ho jata hai but Undefine ke casemeactual value print hota hai 


// Using Function as a default parameter 

function getAge(){
    return 60;
}

function utility(name = "Abhishek", age = getAge()){
     console.log(name, " ", age);
}
utility();