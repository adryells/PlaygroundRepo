import styles from "./componentStyles/Phrase.module.css"

function Phrase() {
  return (
    <div className={styles.PhraseContainer}>
      <p className={styles.PhraseItem}>Esse é um componente de frase</p>
    </div>
  )
}

export default Phrase;