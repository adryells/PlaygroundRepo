import { BrowserRouter as Router, Routes, Route } from 'react-router-dom'
import Home from './components/pages/Home'
import Company from './components/pages/Company'
import Contact from './components/pages/Contact'
import NewProject from './components/pages/NewProject'
import Container from './components/layout/Container/Container'
import NavBar from './components/layout/NavBar/NavBar'
import Footer from './components/layout/Footer/Footer'
import Projects from './components/pages/Projects'

function App() {
  return (
    <Router>
      <NavBar />
      <Container customClass="min-height">
        <Routes>
          <Route path='/' element={<Home />}></Route>
          <Route path='/company' element={<Company />}></Route>
          <Route path='/contact' element={<Contact />}></Route>
          <Route path='/newproject' element={<NewProject />}></Route>
          <Route path='/projects' element={<Projects />}></Route>
        </Routes>
      </Container>
      <Footer />
    </Router>
  );
}

export default App;
