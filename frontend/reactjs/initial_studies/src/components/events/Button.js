function Button(props) {
  return <button text={props.text} onClick={props.event}>{props.text}</button>
}

export default Button;