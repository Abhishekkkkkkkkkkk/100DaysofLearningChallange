// // code 1 
// const t1 = performance.now();
// for(let i = 1; i<=100; i++){
//     let para = document.createElement('p');
//     para.textContent = "This is a Paragraph" + i;
//     document.body.appendChild(para);
// }

// const t2 = performance.now();


// console.log("Total time taken to run from t1 to t2 :- " + (t2-t1));



// // code 2 
// const t3 = performance.now();
// let myDiv = document.createElement('div');
// for(let i = 1; i<=100; i++){
//     let para = document.createElement('p');
//     para.textContent = "This is Para" + i;
//     myDiv.appendChild(para);
// }
// document.body.appendChild(myDiv);
// const t4 = performance.now();

// console.log("Total time taken to run from t3 to t4 :- " + (t4-t3));



// Best code 


let fragement  = document.createDocumentFragment();
for(let i = 1; i<=100; i++){
    let para = document.createElement('p');
    para.textContent = "This is a Paragraph" + i;

    // No reflow and no repaint for the below line 
    fragement.appendChild(para);
}
// Only one reflow and one repaint for the below line
document.body.appendChild(fragement);