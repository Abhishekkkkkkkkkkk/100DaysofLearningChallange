// async function getData(){
//     // POST METHOD 
//     let x = await fetch('https://jsonplaceholder.typicode.com/posts', {
//                         method: 'POST',
//                         body: JSON.stringify({
//                         title: 'foo',
//                         body: 'bar',
//                         userId: 1,
//                         }),
//                         headers: {
//                         'Content-type': 'application/json; charset=UTF-8',
//                         },
//                     })
//     let data = await x.json()
//     console.log(data);    
// }

async function getData(){
    // PUT METHOD 
    let x = await fetch('https://jsonplaceholder.typicode.com/posts/1', {
                        method: 'PUT',
                        body: JSON.stringify({
                        id: 1,
                        title: 'foo',
                        body: 'bar',
                        userId: 1,
                        }),
                        headers: {
                        'Content-type': 'application/json; charset=UTF-8',
                        },
                    })
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
}

main()
