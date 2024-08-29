import mongoose from "mongoose";
import { Schema, model } from "mongoose";

const PaymentSchema = new Schema({
    name: { type: String, required: true },
    to_user: { type: String, required: true },
    order_id:  { type: String, required: true },
    message:  { type: String },
    amount:  { type: Number, required: true },
    createdAt: { type: Date, default: Date.now},
    updatedAt: { type: Date, default: Date.now},
    done: { type: Boolean, default: false },
});

export default mongoose.models.Payment || model('Payment', PaymentSchema);