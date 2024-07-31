import React from 'react'

const about = () => {
  return (
    <div>
      <div><span className='font-bold text-xl'>Next Js :- </span>
      Next.js is a React framework for building full-stack web applications. You use React Components to build user interfaces, and Next.js for additional features and optimizations.
      </div>
      <h1>
        <span className="text-xl font-bold">Features of Next Js</span> 
        <ul>
          <li>
          <b>Routing :- </b>A file-system based router built on top of Server Components that supports layouts, nested routing, loading states, error handling, and more.
          </li>
          <li>
          <b>Rendering :- </b>Client-side and Server-side Rendering with Client and Server Components. Further optimized with Static and Dynamic Rendering on the server with Next.js. Streaming on Edge and Node.js runtimes.
          </li>
          <li>
          <b>Data Fetching :- </b>Simplified data fetching with async/await in Server Components, and an extended fetch API for request memoization, data caching and revalidation.
          </li>
          <li>
          <b>Styling :- </b>Support for your preferred styling methods, including CSS Modules, Tailwind CSS, and CSS-in-JS
          </li>
          <li>
          <b>Optimizations :- </b>Image, Fonts, and Script Optimizations to improve your application's Core Web Vitals and User Experience.
          </li>
        </ul>
      </h1>
    </div>
  )
}
export default about
