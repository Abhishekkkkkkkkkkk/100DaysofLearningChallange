const { error } = require("console")
const fs = require("fs")
// console.log(fs)

console.log("Starting")
// fs.writeFileSync("abhi.txt", "I am Writing Something Inside fs.writeFileSync")

fs.writeFile("abhi2.txt", "I am Writing Something Inside fs.writeFile", () =>{
    console.log("File Created")
    fs.readFile("abhi2.txt", (error, data) =>{
        console.log(error, data.toString())
    })
})

fs.appendFile("abhi.txt", "My Name is Abhishek", (e, d) =>{
    console.log(e, d)
})
console.log("Ending")
