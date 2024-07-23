import './App.css'
import Navbar from './components/Navbar'
import Home from './components/Home'
import Login from './components/Login'
import About from './components/About'
import Contact from './components/Contact'
import Users from './components/Users'
import { createBrowserRouter, RouterProvider } from 'react-router-dom'


function App() {

  const router = createBrowserRouter([
    {
      path: "/",
      element: <> <Navbar /> <Home /> </>
    },
    {
      path: "/login",
      element: <> <Navbar /> <Login /> </>
    },
    {
      path: "/about",
      element: <> <Navbar /> <About /> </>
    },
    {
      path: "/contact",
      element: <> <Navbar /> <Contact /> </>
    },
    {
      path: "/user/:username",
      element: <> <Navbar /> <Users /> </>
    },
  ])

  return (
    <>
    <RouterProvider router={router} />
    </>
  )
}

export default App
