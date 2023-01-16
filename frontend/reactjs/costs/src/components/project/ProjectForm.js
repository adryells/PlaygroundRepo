import { useEffect, useState } from 'react';

import styles from './ProjectForm.module.css';
import Input from '../form/Input/Input';
import Select from '../form/Select/Select';
import SubmitButton from '../form/SubmitButton/SubmitButton';

function ProjectForm({ btnText, handleSubmit, projectData }) {
  const [categories, setCategories] = useState([])
  const [project, setProject] = useState(projectData || {})

  useEffect(
    () => {
      fetch("http://localhost:5000/categories", {
        method: "GET",
        headers: {
          "Content-type": "application/json"
        }
      })
        .then((response) => response.json())
        .then((data) => {
          setCategories(data)
        })
        .catch((error) => console.log(error))
    }, []
  )

  const submit = (event) => {
    event.preventDefault()
    handleSubmit(project)
  }

  function handleChange(event) {
    setProject({ ...project, [event.target.name]: event.target.value })
  }

  function handleCategory(event) {
    setProject({
      ...project, category: {
        id: event.target.value,
        name: event.target.options[event.target.selectedIndex].text
      }
    })
  }

  return (
    <form className={styles.form} onSubmit={submit} action='#'>
      <Input
        type="text"
        text="Nome do Projeto"
        name="name"
        placeholder="Insira o nome do projeto"
        handleOnChange={handleChange}
        value={project.name ? project.name : ""}
      />

      <Input
        type="number"
        text="Orçamento"
        name="budget"
        placeholder="Insira o orçamento do projeto"
        handleOnChange={handleChange}
        value={project.budget ? project.budget : ""}
      />

      <Select
        name="category_id"
        text="Selecione a categoria"
        options={categories}
        handleOnChange={handleCategory}
        value={project.category ? project.category.id : ""}
      />

      <SubmitButton text={btnText} />

    </form>
  )
}

export default ProjectForm;