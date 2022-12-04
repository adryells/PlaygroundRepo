import './App.css';
import { BrowserRouter as Router, Routes, Route, Link } from "react-router-dom";
import Home from './components/pages/Home';
import Example from './components/pages/Example';
import Lol from './components/pages/Lol';

function App() {

  return (
    <Router>
      <ul>
        <li>
          <Link to="/">Home</Link>
        </li>
        <li>
          <Link to="/example">Example</Link>
        </li>
        <li>
          <Link to="/lol">Lol</Link>
        </li>
      </ul>

      <Routes>
        <Route path='/' element={<Home />} />

        <Route path='/example' element={<Example />} />

        <Route path='/lol' element={<Lol />} />
      </Routes>
    </Router>
  );
}

export default App;
