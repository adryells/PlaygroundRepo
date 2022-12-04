function Evento() {
  function meuEvento() {
    console.log("Estoy alertando-o sobre um possivel malware em seu pc!!!")
  }

  return (
    <div>
      <p>Meu primeiro botão com evento em reactJS:</p>
      <button onClick={meuEvento}>Clique aqui</button>
    </div>
  )
}

export default Evento;