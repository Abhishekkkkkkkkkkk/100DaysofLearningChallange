import NextAuth from 'next-auth';
import GithubProvider from 'next-auth/providers/github';
import mongoose from 'mongoose';
import User from '@/models/User';
import Payment from '@/models/Payment';
import connectDB from '@/db/connectDb';

export const authoptions = NextAuth({
  providers: [
    GithubProvider({
      clientId: process.env.GITHUB_ID,
      clientSecret: process.env.GITHUB_SECRET,
    }),
  ],
  callbacks: {
    async signIn({ user, account, profile, email, credentials }) {
      await connectDB();
      const userEmail = email || profile?.email || user?.email || "";

      if (!userEmail) {
        console.error("User email not found");
        return false;
      }

      if (account.provider === "github") {
        // check if the user already exists in the database
        const currentUser = await User.findOne({ email: userEmail });
        if (!currentUser) {
          // Create a new user
          const newUser = new User({
            email: userEmail,
            username: userEmail.split('@')[0],  // Safely handle email
          });
          await newUser.save(); // Save the new user to the database
        }
        return true;
      }
    },

    async session({ session, user, token }) {
      const dbUser = await User.findOne({ email: session.user.email });
      if (dbUser) {
        session.user.name = dbUser.username;
      } else {
        console.error("User not found in database");
      }
      return session;
    },
  },
});

export { authoptions as GET, authoptions as POST };
