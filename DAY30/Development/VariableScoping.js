// Global Scope 

var age = 15;
// let age = 15;
// const age = 15;

console.log(age);

{
    console.log(age);
}
if(true ){
    console.log(age);
} 
for(let i=0; i<4; i++) {
    console.log(age);
}

function sayHello() {
    console.log("Hello ", age);
}
sayHello();


// Function Scope 

// console.log(myName);   // error aayega
function sayHello() {
    const myName = "Abhishek";
    console.log("Hello", myName);
}
// console.log(myName);  //Error aa jayega
sayHello();


// Block Scope 

{
    const age = 100;   
    let weight = 60;
}

console.log(age);
console.log(weight);



// {
//     var height = 150;
// }

// console.log(height);


// Temporal Dead Zone 

console.log(marks);
console.log("Abhishek");
console.log("Kumar");
const marks = 10;   
console.log(marks);