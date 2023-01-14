import { FaFacebook, FaInstagram, FaLinkedin } from 'react-icons/fa';
import styles from './Footer.module.css';

function Footer(props) {
  return (
    <footer className={styles.footer}>
      <ul className={styles.social_list}>
        <li className={styles.item}> <FaFacebook /> </li>
        <li className={styles.item}> <FaLinkedin /> </li>
        <li className={styles.item}> <FaInstagram /> </li>
      </ul>
      <p className={styles.copy_right}><span>Costs Project</span> &copy; 2023</p>
    </footer>
  )
}

export default Footer;