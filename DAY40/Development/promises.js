console.log('Promises in Javascript');

let promise1 = new Promise((resolve, reject) => {

    let a = Math.random();
    if(a < 0.5){
        reject("No Random number was not supporting you")
    }
    else{
        setTimeout(() => {
            console.log('Yes I am done');
            resolve("Abhishek");   
        }, 1000);
    }
})

promise1.then((a) => {
    console.log(a);
    
}).catch((err) =>{
    console.log(err);
})


