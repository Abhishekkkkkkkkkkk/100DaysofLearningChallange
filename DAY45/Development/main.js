const express = require("express");
const app = express();
const port = 3000;

// Static File 
app.use(express.static('public'))

// app.get or app.post or app.put or app.delete  (path , handler)
app.get("/", (req, res) => {
  res.send("Abhishek Kumar");
});

app.get("/about", (req, res) => {
  res.send("About Me");
});

app.get("/contact", (req, res) => {
  res.send("Contact Me");
});

app.get("/blog", (req, res) => {
  res.send("My Blogs");
});

// app.get("/blog/into-to-js", (req, res) => {
//     // Logic to fetch into to js from the DB
//   res.send("My Blogs - into-to-js");
// });

// app.get("/blog/into-to-DSA", (req, res) => {
//     // Logic to fetch into to DSA from the DB
//   res.send("My Blogs - into-to-DSA");
// });

// Agar aisa karte jayenge to hamara code maintable nhi rahega aur ye jayada hi diffucult ho jayega 

// Using slug    ->   Request Parameter
app.get("/blog/:slug", (req, res) => {
    // console.log(req)
    console.log(req.params)   // will output  { slug: 'into-to-DSA' }
    console.log(req.query)   // will output  { 'mode ': ' dark ', ' region ': ' in' }
        // Logic to fetch slug from the DB
      res.send(`My Blogs - ${req.params.slug}`);
});

// Using slug    ->   make multiple Request
// app.get("/blog/:slug/:second", (req, res) => {
//     // Logic to fetch slug from the DB
//   res.send(`My Blogs - ${req.params.slug} and ${req.params.second}`);
// });

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`);
});
