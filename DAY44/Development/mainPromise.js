import fs from "fs/promises"

let a = await fs.readFile("abhi.txt")
console.log(a.toString())

// let b = await fs.writeFile("abhi2.txt", "India India", () => {
//     console.log("\n\nfile written")
// })

let c = fs.appendFile("abhi2.txt", "\n\n\nHello World", (e, d) =>{
    console.log(d)
})


