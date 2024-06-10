// let arr = [1, 2, 3, 4, 5];
// console.log(arr);

// // push 
// arr.push(6);
// console.log(arr);

// // pop 
// arr.pop();
// console.log(arr);

// // shift 
// arr.shift();
// console.log(arr);

// // unshift 
// arr.unshift(1);
// console.log(arr);

// // slice 
// console.log(arr.slice(1,3));

// // splice 
// arr.splice(1,2,10);
// console.log(arr);


// // map method 
// let arr1 = [10, 20, 30];

// let sqArr = arr1.map((number) =>{
//     return number*number;
// })
// console.log(sqArr);


// let arr2 = [10, 20, 30];

// let Num = arr2.map((number, index) =>{
//     console.log(index);
//     console.log(number);   
// })
// console.log(Num);


// // filter 
// let arr3 = [1, 2, 3, 4, 5, 6, 7, 8, 9];

// let evenNum = arr3.filter((number) => {
//     if(number % 2 == 0){
//         return number;
//     }
// })
// console.log(evenNum);


// // reduce 
// let arr4 = [10, 20, 30, 40];

// let redArr = arr4.reduce((acc, crr) =>{
//     return acc + crr;
// }, 0)
// console.log(redArr);



let arrx = [9,1,7,4,2,8];


// sort 
arrx.sort();
console.log(arrx);

// reverse 
arrx.reverse();
console.log(arrx);

// delete 
delete arrx[1];
console.log(arrx);

// index of 
console.log(arrx.indexOf(4));


// concat
let axx = [1,2,3];
let axx1 = [4,5,6];
let axx2 = [7,8,9];

console.log(axx.concat(axx1, axx2));


