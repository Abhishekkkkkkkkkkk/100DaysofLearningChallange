import Image from "next/image";

export default function Home() {
  return (
    <>
    <div className="flex justify-center text-white items-center h-[44vh] flex-col gap-4">
      <div className="font-bold text-5xl">Buy me a Chai</div>
      <p>
        Lorem ipsum dolor sit amet consectetur adipisicing elit. Aut fuga, consectetur vero hic ratione veritatis reprehenderit nobis, ipsum quia aliquam rem porro ex.
      </p>
      <div>
      <button type="button" class="text-white bg-gradient-to-br from-purple-600 to-blue-500 hover:bg-gradient-to-bl focus:ring-4 focus:outline-none focus:ring-blue-300 dark:focus:ring-blue-800 font-medium rounded-lg text-sm px-5 py-2.5 text-center me-2 mb-2">Start Now</button>
      <button type="button" class="text-white bg-gradient-to-br from-purple-600 to-blue-500 hover:bg-gradient-to-bl focus:ring-4 focus:outline-none focus:ring-blue-300 dark:focus:ring-blue-800 font-medium rounded-lg text-sm px-5 py-2.5 text-center me-2 mb-2">Read More</button>
      </div>
    </div>
    <div className="bg-white h-1 opacity-10"></div>

    <div className="text-white container mx-auto pb-32 pt-14">
      <h2 className="text-3xl font-bold text-center mb-14">Your Fans Can Buy You a Chai</h2>
      <div className="flex gap-5 justify-around">
        <div className="item space-y-3 flex flex-col items-center justify-center">
          <img className="bg-slate-400 rounded-full p-2 text-black" width={88} src="" alt="" />
          <p className="text-lg font-bold">Fan 1</p>
          <p className="text-sm">Fan 1 description</p>
        </div>
        <div className="item space-y-3 flex flex-col items-center justify-center">
          <img className="bg-slate-400 rounded-full p-2 text-black" width={88} src="" alt="" />
          <p className="text-lg font-bold">Fan 1</p>
          <p className="text-sm">Fan 1 description</p>
        </div>
        <div className="item space-y-3 flex flex-col items-center justify-center">
          <img className="bg-slate-400 rounded-full p-2 text-black" width={88} src="" alt="" />
          <p className="text-lg font-bold">Fan 1</p>
          <p className="text-sm">Fan 1 description</p>
        </div>
      </div>
    </div>

    <div className="bg-white h-1 opacity-10"></div>

    <div className="text-white container mx-auto pb-32 pt-14 flex flex-col items-center justify-center">
      <h2 className="text-3xl font-bold text-center mb-14">Learn more about us</h2>
      <iframe width="560" height="315" src="https://www.youtube.com/embed/QtaorVNAwbI?si=D7D9aFwe8g0Wx21Q" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
    </div>
    </>
  );
}
