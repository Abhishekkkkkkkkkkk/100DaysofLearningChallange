import Footer from "./components/Footer"
import Navbar from "./components/Navbar"
import Card from "./components/Card"
function App() {

  return (
    <>
      <Navbar />
      <div className="cardd">
        <Card title = "Card 1 Title" description = "Card 1 Description"/>
        <Card title = "Card 2 Title" description = "Card 2 Description"/>
        <Card title = "Card 3 Title" description = "Card 3 Description"/>
        <Card title = "Card 4 Title" description = "Card 4 Description"/>
      </div>
      <Footer />
    </>
  )
}

export default App
