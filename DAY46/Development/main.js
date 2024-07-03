const express = require("express");
const blog = require('./routes/blog')
const shop = require('./routes/shop')



const app = express();
const port = 3000;

// Using Middle Ware 
app.use(express.static("public"));
app.use('/blog', blog)
app.use('/shop', shop)

// app.get("/", (req, res) => {
//   console.log("Hey it's a Get Request");
//   res.send("Get Request");
// });

// app.post("/", (req, res) => {
//   console.log("Hey it's a Post Request");
//   res.send("Post Request");
// });

// app.put("/", (req, res) => {
//   console.log("Hey it's a Put Request");
//   res.send("Put Request");
// });

// app.delete("/", (req, res) => {
//   console.log("Hey it's a Delete Request");
//   res.send("Delete Request");
// });

// Chaining of Requests
app
  .get("/", (req, res) => {
    console.log("Hey it's a Get Request");
    res.send("Get Request");
  })
  .post("/", (req, res) => {
    console.log("Hey it's a Post Request");
    res.send("Post Request");
  })
  .put("/", (req, res) => {
    console.log("Hey it's a Put Request");
    res.send("Put Request");
  })
  .delete("/", (req, res) => {
    console.log("Hey it's a Delete Request");
    res.send("Delete Request");
  });

//   Serving HTML FILES into EXPRESS JS
app.get("/index", (req, res) => {
  console.log("Hey it's a INDEX");
  res.sendFile("templates/index.html", { root: __dirname });
});

app.get("/api", (req, res) => {
  res.json({ a: 1, b: 2, c: 3, d: 4, allnames: ["Abhishek", "Adwitiya"] });
});

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`);
});
