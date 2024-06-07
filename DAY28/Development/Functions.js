// // Function Defination

// function myName(){
//     console.log("Abhishek Kumar")
// }

// // Function Use - Function Call 

// myName();

// // Print counting Function

// function printCount(){
//     for(i =1; i<=10; i++){
//         console.log(i);
//     }
// }

// printCount();

// function paraSend(num){
//     console.log("Printing Parameter :- ", num);
// }

// paraSend(7);


// // Function for average number

// function getAvg(num1, num2){
//     let avg = (num1 + num2) / 2;
//     console.log("The average of given number is :-", avg);
// }

// getAvg(4, 6);


// // return function

// function getSum(a, b, c){
//     let sum = a + b + c;
//     return sum;
// }
// let ans = getSum(4, 6, 10);

// console.log("The sum is :- ", ans);



// // Print name fuction

// function myName(firstName, LastName){
//     let fullName = firstName + LastName;
//     return fullName;
    
//     // Unreachable Statement 

//     // let a = 5; 
//     // let b = 10;
//     // let sum = a + b;
//     // console.log(sum);

// }

// let MyWholeName = myName("Abhishek ", "Kumar");

// console.log(MyWholeName);


const getMultiplication = function (a,b) {
    return a*b;
}
let ans = getMultiplication(20,10);
console.log(ans);


// Arrow Function 

const greet = (name) => {
    return `Hello, ${name}!`;
};
console.log(greet("Abhishek"));