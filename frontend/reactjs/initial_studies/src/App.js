import './App.css';
import HelloWorld from './components/HelloWorld';
import Person from './components/Person';

function App() {
  return (
    <div className="App">
      <HelloWorld />
      <Person
        name="Adryell"
        age="19"
        job="Programador"
        picture="https:via.placeholder.com/150"
      />
    </div>
  );
}

export default App;
