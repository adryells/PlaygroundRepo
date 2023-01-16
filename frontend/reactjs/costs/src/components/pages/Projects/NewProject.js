import ProjectForm from '../../project/ProjectForm';
import styles from './NewProject.module.css'
import { useNavigate } from 'react-router-dom'


function NewProject() {
  const history = useNavigate()

  function CreateProject(project) {

    project.cost = 0
    project.services = []

    fetch("http://localhost:5000/projects", {
      method: "POST",
      headers: {
        "Content-type": "application/json"
      },
      body: JSON.stringify(project)
    })
      .then((response) => response.json())
      .then((data) => { console.log(data) })
      .then((data) => history('/projects', { message: 'Projeto criado com sucesso!' }))
  }


  return (
    <div className={styles.new_project_container}>
      <h1>Criar projeto</h1>
      <p>Crie seu projeto para depois adicionar os serviços</p>
      <ProjectForm btnText="Criar projeto" handleSubmit={CreateProject} />
    </div>
  );
}

export default NewProject;