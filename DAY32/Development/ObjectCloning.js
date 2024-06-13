// Why Object is Dynamic Nature? 

// let obj = {
//     Name: "Abhishek",
//     Age: 21,
//     Height: 160
// };
// console.log(obj);
// obj.Weight = 60;
// console.log(obj);

// Object Cloning Methods 

// 1 -> Using Spread Operator 

// let src = {
//     Name: "Abhishek",
//     Age: 21,
//     Height: 160
// };

// let dest = {...src};

// // let dest = src;  //Object same hai but reference two ho gaye hai

// src.Age = 25;

// console.log("Src", src);
// console.log("Dest",dest);


// 2 -> Using asign Method 

// let src1 = {
//     Name: "Abhishek",
//     Age: 21,
//     Height: 160
// };
// let src2 = {
//     Village: "Singhiya",
//     State: "Bihar",
//     Dist: "Samastipur"
// };

// let dest = Object.assign({}, src1, src2);

// src1.Age = 25;

// console.log("Src1", src1);
// console.log("Dest",dest);



// 3 -> Using iteration Method 

let src = {
    Name: "Abhishek",
    Age: 21,
    Height: 160
};

let dest = {};

for(let key in src){
    let newKey = key;
    let newVal = src[key];

    // Insert newKey and newVal in dest and create a clone
    dest[newKey] = newVal; 

}

src.Age = 25;

console.log("Src", src);
console.log("Dest",dest);