let prom1 = new Promise((resolve, reject) => {

    let a = Math.random();
    if(a < 0.5){
        reject("I am  a first random number")
    }
    else{
        setTimeout(() => {
            console.log('I am first done');
            resolve("Abhishek Kumar");   
        }, 1000);
    }
})

let prom2 = new Promise((resolve, reject) => {

    let a = Math.random();
    if(a < 0.5){
        reject("I am a second random rumber")
    }
    else{
        setTimeout(() => {
            console.log('I am second done');
            resolve("Adwitiya Mourya");   
        }, 2000);
    }
})

let prom3 = new Promise((resolve, reject) => {

    let a = Math.random();
    if(a < 0.5){
        reject("I am a third random rumber")
    }
    else{
        setTimeout(() => {
            console.log('I am third done');
            resolve("Anurag Kadam");   
        }, 3000);
    }
})

let prom4 = new Promise((resolve, reject) => {

    let a = Math.random();
    if(a < 0.5){
        reject("I am a fourth random rumber")
    }
    else{
        setTimeout(() => {
            console.log('I am fourth done');
            resolve("Anuj Thakur");   
        }, 4000);
    }
})

// Promise.all 

// let prom = Promise.all([prom1, prom2, prom3, prom4]);
// prom.then((a) => {
//     console.log(a);
    
// }).catch((err) =>{
//     console.log(err);
// })

// Promise.allSettled

// let prom = Promise.allSettled([prom1, prom2, prom3, prom4]);
// prom.then((a) => {
//     console.log(a);
    
// }).catch((err) =>{
//     console.log(err);
// })


// Promise.race

// let prom = Promise.race([prom1, prom2, prom3, prom4]);
// prom.then((a) => {
//     console.log(a);
    
// }).catch((err) =>{
//     console.log(err);
// })


// Promise.any

// let prom = Promise.any([prom1, prom2, prom3, prom4]);
// prom.then((a) => {
//     console.log(a);
    
// }).catch((err) =>{
//     console.log(err);
// })

// Promise.resolve

// let prom = Promise.resolve([prom1, prom2, prom3, prom4]);
// prom.then((a) => {
//     console.log(a);
    
// }).catch((err) =>{
//     console.log(err);
// })

// Promise.reject

let prom = Promise.reject([prom1, prom2, prom3, prom4]);
prom.then((a) => {
    console.log(a);
    
}).catch((err) =>{
    console.log(err);
})