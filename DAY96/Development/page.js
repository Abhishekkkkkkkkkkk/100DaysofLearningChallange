import Image from "next/image";
import Link from "next/link";

export default function Home() {
  return (
    <>
      {/* Hero Section */}
      <div className="flex justify-center text-white items-center h-[50vh] flex-col gap-4">
        <div className="font-bold text-5xl">Buy me a Chai</div>
        <p className="text-center max-w-2xl">
          Welcome to GetMeAChai, the perfect platform for creators and supporters
          to connect. Whether you're an artist, writer, or any kind of creator, your
          fans can now support you by buying you a chai and fueling your creative
          journey. Join us and make it easier for your fans to show appreciation for
          your work!
        </p>
        <div>
          <Link href={"/login"}>
            <button
              type="button"
              className="text-white bg-gradient-to-br from-purple-600 to-blue-500 hover:bg-gradient-to-bl focus:ring-4 focus:outline-none focus:ring-blue-300 dark:focus:ring-blue-800 font-medium rounded-lg text-sm px-5 py-2.5 text-center mb-2 mx-2"
            >
              Start Now
            </button>
          </Link>
          <Link href={"/about"}>
            <button
              type="button"
              className="text-white bg-gradient-to-br from-purple-600 to-blue-500 hover:bg-gradient-to-bl focus:ring-4 focus:outline-none focus:ring-blue-300 dark:focus:ring-blue-800 font-medium rounded-lg text-sm px-5 py-2.5 text-center mb-2 mx-2"
            >
              Read More
            </button>
          </Link>
        </div>
      </div>

      {/* Divider */}
      <div className="bg-white h-1 opacity-10"></div>

      {/* Fans Section */}
      <div className="text-white container mx-auto pb-32 pt-14">
        <h2 className="text-3xl font-bold text-center mb-14">
          Your Fans Can Buy You a Chai
        </h2>
        <div className="flex gap-5 justify-around flex-wrap">
          {/* Fan 1 */}
          <div className="item space-y-3 flex flex-col items-center justify-center text-center max-w-xs">
            <img
              className="rounded-full border-4 border-purple-500"
              width={120}
              height={120}
              src="fan1.jpg" 
              alt="Fan 1"
            />
            <p className="text-lg font-bold">Alex Johnson</p>
            <p className="text-sm">
              Alex is a passionate supporter of creators in the tech and music industries.
            </p>
          </div>
          {/* Fan 2 */}
          <div className="item space-y-3 flex flex-col items-center justify-center text-center max-w-xs">
            <img
              className="rounded-full border-4 border-purple-500"
              width={120}
              height={120}
              src="fan1.jpg" 
              alt="Fan 2"
            />
            <p className="text-lg font-bold">Sarah Lee</p>
            <p className="text-sm">
              Sarah loves supporting visual artists and writers who inspire her creativity.
            </p>
          </div>
          {/* Fan 3 */}
          <div className="item space-y-3 flex flex-col items-center justify-center text-center max-w-xs">
            <img
              className="rounded-full border-4 border-purple-500"
              width={120}
              height={120}
              src="fan1.jpg" 
              alt="Fan 3"
            />
            <p className="text-lg font-bold">Mark Davis</p>
            <p className="text-sm">
              Mark is an avid fan of digital content creators and loves giving back to the community.
            </p>
          </div>
        </div>
      </div>

      {/* Divider */}
      <div className="bg-white h-1 opacity-10"></div>

      {/* Video Section */}
      <div className="text-white container mx-auto pb-32 pt-14 flex flex-col items-center justify-center">
        <h2 className="text-3xl font-bold text-center mb-14">Learn more about us</h2>
        <iframe
          width="560"
          height="315"
          src="https://www.youtube-nocookie.com/embed/QtaorVNAwbI?si=D7D9aFwe8g0Wx21Q"
          title="YouTube video player"
          frameBorder={"0"}
          allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share"
          referrerPolicy="strict-origin-when-cross-origin"
          allowFullScreen
        ></iframe>
      </div>
    </>
  );
}
