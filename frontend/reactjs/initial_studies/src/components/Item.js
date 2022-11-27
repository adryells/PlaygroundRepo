import PropTypes from 'prop-types'

function Item({ language, years_experiency }) {
  return (
    <>
      <li>{language} - {years_experiency} Anos</li>
    </>
  )
}

Item.propTypes = {
  language: PropTypes.string.isRequired,
  years_experiency: PropTypes.number.isRequired
}

Item.defaultProps = {
  language: "Faltou a linguagem.",
  years_experiency: 0
}

export default Item;