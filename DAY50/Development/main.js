import mongoose  from "mongoose";
import express from "express";
import { Todo } from "./models/Todo.js";
import { title } from "process";

let connection = await mongoose.connect("mongodb://localhost:27017/todo")

const app = express()
const port = 3000

app.get('/', (req, res) => {
  const todo = new Todo({title: "This is Title", description: "This is Description", isCompleted: false, 
    days: Math.floor(Math.random() * 34 + 5 * Math.random())})
  todo.save()
  res.send('Hello World!')
})

app.get('/a', async (req, res) => {
    let todo = await Todo.findOne({})
    console.log(todo)
    res.json({title: todo.title, description: todo.desc})
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})


// https://www.npmjs.com/package/mongodb