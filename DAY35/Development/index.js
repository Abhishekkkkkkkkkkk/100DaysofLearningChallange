// function changeText(event){
//     console.log(event);
//     let firstPara = document.getElementById('fpara');
//     firstPara.textContent = "Hello Adwitiya";
// }

// let firstPara = document.getElementById('fpara');
// firstPara.addEventListener('click', changeText);
// // firstPara.removeEventListener('click', changeText);


// Changing default Action 

let anchorElement = document.getElementById('fanchor');
anchorElement.addEventListener('click', function(event){
    event.preventDefault();
    anchorElement.textContent = "Click Kyu Kar Rhe Ho?";
    });