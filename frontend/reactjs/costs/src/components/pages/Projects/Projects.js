import { useState, useEffect } from "react";
import Container from "../../layout/Container/Container";
import Message from "../../layout/Message/Message";

function Projects() {
  const [projects, setProjects] = useState([])

  useEffect(
    () => {
      fetch("http://localhost:5000/projects", {
        method: "GET",
        headers: {
          "Content-type": "application/json"
        }
      })
        .then((response) => response.json())
        .then((data) => {
          setProjects(data)
        })
        .catch((error) => console.log(error))
    }, []
  )

  return (
    <Message msg="Some msg" />
  );
  {/*
      <Container>
       {projects.map((project) => (
        <div>
          <h1>{project.name}</h1>
          <p>Orçamento: {project.budget}</p>
          <p>Custos: {project.cost} </p>
        </div>
      ))
      
       </Container> */}

}

export default Projects;