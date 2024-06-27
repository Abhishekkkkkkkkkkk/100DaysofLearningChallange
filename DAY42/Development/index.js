async function sleep(){
    return new Promise((resolve, reject) =>{
        setTimeout(() => {
            resolve(450)
            }, 1000);
    });
}

(async function main(){
// let a = await sleep();
// console.log(a);
// let b = await sleep();
// console.log(b);

// let [x,y] = [7,8,9];
// console.log(x,y);

// let [x, y, ...rest] = [7,8,9,10,11,12,13];
// console.log(x,y,rest);

let obj = {
    a: 1,
    b: 2,
    c: 3,
    d: 4
}
let {a,b} = obj;
console.log(a,b);


})()