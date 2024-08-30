import NextAuth from 'next-auth';
import GithubProvider from 'next-auth/providers/github';
import mongoose from 'mongoose';
import User from '@/models/User';
import connectDB from '@/db/connectDb';

export const authOptions = NextAuth({
  providers: [
    GithubProvider({
      clientId: process.env.GITHUB_ID,
      clientSecret: process.env.GITHUB_SECRET,
    }),
  ],
  callbacks: {
    async signIn({ user, account, profile, email, credentials }) {
      if (account.provider === 'github') {
        // Ensure database is connected before querying
        await connectDB();

        // Check if the user already exists in the database
        const currentUser = await User.findOne({ email: email });

        if (!currentUser) {
          // If the user does not exist, create a new user
          const newUser = new User({
            email: email,
            username: email.split('@')[0],
          });
          await newUser.save();
        }

        return true;
      }
    },
    async session({ session, user, token }) {
      // Ensure database is connected before querying
      await connectDB();

      const dbUser = await User.findOne({ email: session.user.email });

      if (dbUser) {
        session.user.name = dbUser.username;
      }

      return session;
    },
  },
});

export { authOptions as GET, authOptions as POST };