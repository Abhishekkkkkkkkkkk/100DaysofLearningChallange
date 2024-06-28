// const { createServer } = require('node:http');
// const fs = require("fs");


// Import Named Export 
// import {a} from "./mymodule.js";
// console.log(a)

// Import Default Export 
// import abhi from "./mymodule.js"
// console.log(abhi)

// (function(exports, require, module, __filename, __dirname){
//   // Module Code Actually Live Here
// });

const a = require("./mymodule2.js")
console.log(a, __dirname)


// const hostname = '127.0.0.1';
// const port = 3000;

// const server = createServer((req, res) => {
//   res.statusCode = 200;
//   res.setHeader('Content-Type', 'text/html');
//   res.end('<h1>Hello Abhishek</h1>');
// });

// server.listen(port, hostname, () => {
//   console.log(`Server running at http://${hostname}:${port}/`);
// });