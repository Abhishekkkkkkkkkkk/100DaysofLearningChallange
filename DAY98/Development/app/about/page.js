import Link from "next/link";

export default function About() {
  return (
    <div className="min-h-screen bg-gray-900 text-white">
      {/* Header Section */}
      <div className="bg-gradient-to-br from-purple-600 to-blue-500 py-16 text-center">
        <h1 className="text-4xl font-bold mb-4">About GetMeAChai</h1>
        <p className="text-lg">
          A platform where creativity is fueled by chai and supported by your fans.
        </p>
      </div>

      {/* Our Mission Section */}
      <section className="container mx-auto py-16 px-6">
        <h2 className="text-3xl font-bold text-center mb-8">Our Mission</h2>
        <div className="text-center max-w-4xl mx-auto">
          <p className="text-lg mb-6">
            GetMeAChai is built with a mission to provide a simple and effective
            way for creators to receive support from their fans. Our goal is to
            foster a community where creativity can flourish, and fans can easily
            show their appreciation by buying creators a chai.
          </p>
          <p className="text-lg">
            Whether you're an artist, a developer, or a musician, we provide the
            platform where your supporters can help sustain your journey through
            micro-payments, creating a bridge between fans and creators.
          </p>
        </div>
      </section>

      {/* How It Works Section */}
      <section className="container mx-auto py-16 px-6 bg-gray-800 rounded-lg shadow-md">
        <h2 className="text-3xl font-bold text-center mb-8">How It Works</h2>
        <div className="flex flex-col md:flex-row justify-between items-center gap-12">
          {/* Step 1 */}
          <div className="flex-1 text-center">
            <div className="bg-slate-700 p-6 rounded-lg">
              <h3 className="text-xl font-semibold mb-4">1. Create an Account</h3>
              <p className="text-sm">
                Sign up in a few simple steps and set up your profile. Share your
                creative journey and start building your community.
              </p>
            </div>
          </div>

          {/* Step 2 */}
          <div className="flex-1 text-center">
            <div className="bg-slate-700 p-6 rounded-lg">
              <h3 className="text-xl font-semibold mb-4">2. Share Your Work</h3>
              <p className="text-sm">
                Post your latest work and let your fans know how they can support
                you. Whether it's a project, artwork, or music, your fans are here to
                back you.
              </p>
            </div>
          </div>

          {/* Step 3 */}
          <div className="flex-1 text-center">
            <div className="bg-slate-700 p-6 rounded-lg">
              <h3 className="text-xl font-semibold mb-4">3. Get Supported</h3>
              <p className="text-sm">
                Fans can now buy you a chai as a token of their appreciation, helping
                to fund your creative projects.
              </p>
            </div>
          </div>
        </div>
      </section>

      {/* Why Choose Us Section */}
      <section className="container mx-auto py-16 px-6">
        <h2 className="text-3xl font-bold text-center mb-8">Why Choose Us?</h2>
        <div className="max-w-4xl mx-auto text-center">
          <p className="text-lg mb-6">
            GetMeAChai offers a simple, effective, and heartfelt way for creators to
            receive support from their fans. We believe that every creator deserves
            the chance to pursue their passion, and fans deserve the opportunity to
            contribute to the projects they love.
          </p>
          <p className="text-lg">
            With a focus on micro-payments, transparency, and ease of use, we're
            making it easier than ever for creators and supporters to build
            meaningful connections.
          </p>
        </div>
      </section>

      {/* Call to Action Section */}
      <div className="text-center py-16 bg-gradient-to-br from-blue-500 to-purple-600">
        <h2 className="text-3xl font-bold mb-4">Join the GetMeAChai Community</h2>
        <p className="text-lg mb-6">
          Ready to start your journey? Create an account and connect with your fans today!
        </p>
        <Link href="/login">
          <button
            type="button"
            className="text-white bg-gradient-to-br from-purple-600 to-blue-500 hover:bg-gradient-to-bl focus:ring-4 focus:outline-none focus:ring-blue-300 dark:focus:ring-blue-800 font-medium rounded-lg text-sm px-5 py-2.5 text-center"
          >
            Get Started
          </button>
        </Link>
      </div>
    </div>
  );
}

// Add page title 
export const metadata = {
  title: "About - Get Me A Chai",
}
