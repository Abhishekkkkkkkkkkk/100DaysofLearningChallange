// Assign to a variable

// let greet = function(){
//     console.log("Greetings of the Day")
// }
// greet();

// Passing Function  as an Argument

function greetMe(greet, MyName){
    console.log("Hello", MyName);
    greet();
}

function greet(){
    console.log("Greetings of the Day")
}
greetMe(greet, "Abhishek");

// returning  a function 

function solve(number){

    return function(number){
        return number*number;
    }
}
let ans = solve(5);
let finialAns = ans(10);
console.log(finialAns);


// Using function in Data Structure 

const arr = [
    function(a,b){
        return a+b;
    },
    function(a,b){
        return a-b;
    },
    function(a,b){
        return a*b;
    }
]

let first = arr[0];
let answer1 = first(10, 5);
console.log(answer1);

let second = arr[1];
let answer2 = second (10, 5);
console.log(answer2);

let third = arr[2];
let answer3 = third (10, 5);
console.log(answer3);


// Using function in an object 

let obj = {
    age: 21,
    Name: "Abhishek",
    Height: 129,
    greet: () => {
        console.log("Hello World!");
    }
}

console.log(obj.Name);
obj.greet();

