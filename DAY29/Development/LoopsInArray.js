// for each loop 

let arr = [10,20,30];

let length = arr.length;
console.log("length: " , length);

//tradiotional loop
// for(let index = 0; index < length; index++) {
//     console.log(arr[index]);
// }

arr.forEach((value, index) => {
    console.log("Number: ", value, " Index: ", index);
})


// for in loop 

let obj = {
    name: "Abhishek",
    age: 21,
    weight: 60,
    height: "5ft 7inch",
    greet: function(){
        console.log("Hello, How are You?");
    }
};

for(let key in obj) {
    console.log(key, " ", obj[key]);
}

// for of loop 

let arr1 = [10,20,30,40];

for(let value of arr1) {
    console.log(value);
}

let fullName = "ABHISHEK";

for(let val of fullName) {
    console.log(val);
}