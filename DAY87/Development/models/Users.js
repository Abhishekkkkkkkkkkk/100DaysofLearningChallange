import mongoose from "mongoose";
import { Schema, model } from "mongoose";

const userSchema = new Schema({
    name: { type: String },
    email: { type: String, required: true },
    username:  { type: String, required: true },
    profilepic:  { type: String },
    coverpic:  { type: String },
    createdAt: { type: Date, default: Date.now},
    updatedAt: { type: Date, default: Date.now},
});

export default mongoose.models.User || model('User', userSchema);