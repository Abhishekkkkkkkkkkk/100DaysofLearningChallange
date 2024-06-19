// let paras = document.querySelectorAll('p');

function alertPara(event){
    if(event.target.nodeName === 'SPAN'){
        alert('You clicked on paragraph :- ' + event.target.textContent);
    }
}

// for(let i = 0; i<paras.length; i++){
//     let para = paras[i];
//     para.addEventListener('click', alertPara);
// }

let myDiv = document.getElementById('fdiv');
document.addEventListener('click', alertPara);