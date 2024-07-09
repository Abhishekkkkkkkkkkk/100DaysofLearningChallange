import mongoose from "mongoose";

const TodoSchema = new mongoose.Schema({
    title: String,
    description: String,
    isCompleted: Boolean,
    days: Number
});

export const Todo = mongoose.model('Todo', TodoSchema);