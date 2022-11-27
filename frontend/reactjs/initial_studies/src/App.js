import './App.css';
import HelloWorld from './components/HelloWorld';
import Person from './components/Person';
import Phrase from './components/Phrase';

function App() {
  return (
    <div className="App">
      <HelloWorld />
      <Person
        name="Adryell"
        age="19"
        job="Programador"
        picture="https://images-wixmp-ed30a86b8c4ca887773594c2.wixmp.com/f/5f4bd7a6-f763-4518-9b81-bdfd40ce3fc9/d26yedh-7321e3e3-0846-4b77-b418-a30348f982f3.png?token=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJzdWIiOiJ1cm46YXBwOjdlMGQxODg5ODIyNjQzNzNhNWYwZDQxNWVhMGQyNmUwIiwiaXNzIjoidXJuOmFwcDo3ZTBkMTg4OTgyMjY0MzczYTVmMGQ0MTVlYTBkMjZlMCIsIm9iaiI6W1t7InBhdGgiOiJcL2ZcLzVmNGJkN2E2LWY3NjMtNDUxOC05YjgxLWJkZmQ0MGNlM2ZjOVwvZDI2eWVkaC03MzIxZTNlMy0wODQ2LTRiNzctYjQxOC1hMzAzNDhmOTgyZjMucG5nIn1dXSwiYXVkIjpbInVybjpzZXJ2aWNlOmZpbGUuZG93bmxvYWQiXX0.nvmUh7ZUbQgHUITE1Dhs97KzGb_gD2BjLiOiq73oMLY"
      />
      <Phrase />
    </div>
  );
}

export default App;
