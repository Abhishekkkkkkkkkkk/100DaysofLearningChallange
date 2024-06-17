// .style method 
let sparaElement = document.getElementById('spara');
sparaElement.style.backgroundColor = 'yellow';

// .cssText method 
let secondDivElement = document.getElementById('sdiv');
secondDivElement.style.cssText = "background-color: black; color: white; border: 10px solid purple";

// .setAttribute method 
let firstDivElement = document.querySelector('#fdiv');
firstDivElement.setAttribute('class', 'fdivclass');
firstDivElement.setAttribute('style', "padding: 1rem; background-color: orange; color: white;");

// .className method

let fparaElement = document.getElementById('fpara');
// fparaElement.className;
// fparaElement.className = "f3 f4";

// .classList mrthod 
// fparaElement.classList;

fparaElement.classList.add('f5');

fparaElement.classList.remove('f1');

fparaElement.classList.toggle('f2');

fparaElement.classList.contains('f5');