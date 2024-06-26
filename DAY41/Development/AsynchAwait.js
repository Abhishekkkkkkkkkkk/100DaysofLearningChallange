// async function getData(){

//     // Simulate getting data form the server 
//     return new Promise((resolve, reject) =>{
//         setTimeout(() =>{
//             resolve(455)
//     }, 3000);
//     });
// }

async function getData(){

    // Simulate getting data form the server 
    let x = await fetch('https://jsonplaceholder.typicode.com/todos/1')
    let data = await x.json()
    console.log(data);
    
      
}


async function main(){

    console.log('Loading Modules');
    console.log("Do Something Else");
    console.log("Load Data");

    let data = await getData()

    console.log(data);

    console.log("Process Data");

    console.log("Other Task");
}

main()
