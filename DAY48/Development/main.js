const express = require('express')
const app = express()
const port = 3000

// Set view engine 
app.set('view engine', 'ejs');

app.get('/', (req, res) => {
    let siteName = "Learniverse"
    let searcText = "Search Now"
    let arr = ["learn", "2k24", 2025, "earn"]
  res.render('index', {siteName: siteName, searcText: searcText, arr})
})

app.get('/blog/:slug', (req, res) => {
    let blogTitle = "Why Learniverse ?"
    let blogContent = "Learniverse will be a better Learning Palteform in few years."
  res.render('blogpost.html', {blogTitle: blogTitle, blogContent: blogContent})
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})




