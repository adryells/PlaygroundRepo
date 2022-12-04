import { useState } from "react";

function Form() {
  function cadastraUsuario(e) {
    e.preventDefault()
    alert(`Usuario ${email} Cadastrado com senha ${senha}!!!`);
  }

  const [email, setEmail] = useState("xxxx@provedor.terminação");
  const [senha, SetPassword] = useState("senha");

  return (
    <form>
      <input type="email" name="email" id="email" onChange={setEmail} />
      <br />
      <input type="password" name="password" id="password" onChange={SetPassword} />
      <br />
      <input type="submit" value="Enviar" onClick={cadastraUsuario} />
    </form>
  );

}

export default Form;