// Compile Time Error 
// Syntax Error 
// console.log(;

// Run Time Error
// Reference Error 
// console.log(x);

// try-catch block 

// try{
//     // Yahape wo code likhenge jaha pe error aa sakta hai 
//     console.log("Try Block Start Here");
//     console.log(x);
//     console.log("Try Block Ends Here");

// }
// catch(err){
//      //define krte h, error k sath aap kya krna chahte h 
//     //retry logic //fallback mechanism //logging
//     //custom error

//     console.log("I am inside Catch Block");
//     console.log("This is the Error ", err);
// }
// finally{
//     console.log("I will run every time as i am a Finally Block");
// }

// let's create a custom error

// try{
//     //Reference error
//     console.log(x);
// }
// catch(err) {
//     throw new Error("Bhai pehle declare to karlo, fir print kar dena");
// }

let errorCode = 100;
if(errorCode == 100 ) {
    throw new Error("Invalid Json");
}