import styles from './ProjectForm.module.css'
import Input from '../form/Input/Input';
import Select from '../form/Select/Select';
import SubmitButton from '../form/SubmitButton/SubmitButton';

function ProjectForm({ btnText }) {
  return (
    <form className={styles.form}>
      <Input
        type="text"
        text="Nome do Projeto"
        name="project_name"
        placeholder="Insira o nome do projeto"
      />

      <Input
        type="number"
        text="Orçamento"
        name="budget"
        placeholder="Insira o orçamento do projeto"
      />

      <Select name="category_id" text="Selecione a categoria" />

      <SubmitButton text={btnText} />

    </form>
  )
}

export default ProjectForm;