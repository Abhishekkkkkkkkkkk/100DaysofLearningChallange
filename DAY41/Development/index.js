function getData(){
    return new Promise((resolve, reject) =>{
        setTimeout(() =>{
            resolve(455)
    }, 3000);
    });
}

console.log('Loading Modules');
console.log("Do Something Else");
console.log("Load Data");


let data = getData()

data.then((v) =>{

console.log(data);
console.log("Process Data");
console.log("Other Task");

})

