import { Inter } from "next/font/google"; 
import Navbar from "@/components/Navbar";
import Footer from "@/components/Footer";

const inter = Inter({ subsets: ["latin"] });

export const metadata = {
  title: "MY NEXT APP",
  description: "This is the best next app in the world",
};

export default function AdminLayout({ children }) {
  return (
     <>
     <span>Admin Navbar</span>
        {children} 
     </>
  );
}