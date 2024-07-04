const express = require('express')
const app = express()
const port = 3000
const fs = require('fs')

const blog = require('./routes/blog')

app.use('/blog', blog)

// Built in middleware
app.use(express.static("public"))

// Writing a Custom Middleware 
// const myLogger = function (req, res, next) {
//     console.log('LOGGED')
//     next()
//   }
// app.use(myLogger)

// Writing above function in more Customized way 
 
// Middle Ware 1
// app.use((req, res, next) => {
//     console.log('Middle Ware 1')
//     // res.send("pehale mujhe request mil gaya isilye mai chal gaya")     //Aisa karne se ye error aayega :- Cannot set headers after they are sent to the client
//     next()
// })

// Example of middleware - Logger for our application
app.use((req, res, next) => {
    console.log(req.headers)
    req.don = "Change and Modify Request"
    fs.appendFileSync("logs.txt", `${Date.now()} is a ${req.method}\n`);
    console.log(`${Date.now()} is a ${req.method}`);
    next();
});

// Middle Ware 2
app.use((req, res, next) => {
    console.log('Middle Ware 2')
    req.don = "Change and Modify Request in middleware 2"
    next()
})

app.get('/', (req, res) => {
  res.send('Hello World!')
})

app.get('/about', (req, res) => {
    res.send('About Page' + req.don)
  })
  app.get('/contact', (req, res) => {
    res.send('Hello World!')
  })
app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})