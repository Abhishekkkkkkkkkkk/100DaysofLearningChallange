// Asynchronous Nature of Javascript
// console.log("My name is Abhishek")
// console.log("My Friend name is Adwitiya")

// setTimeout( () => {
//     console.log("Hello World")
// },2000);

// console.log("Mai Pehale aaunga because of Asynchronous Nature of Javascript")


// CallBacks


const loadScript = (src, callback) => { 
    let script = document.createElement("script")
    script.src = src;
    script.onload = callback("Abhishek");
    document.head.append(script);
}


// Now we can do Something like this 
loadScript("https://abhishek2k24.netlify.app/", (script) => {
    alert("Script is loaded");
    alert(script.src);
});