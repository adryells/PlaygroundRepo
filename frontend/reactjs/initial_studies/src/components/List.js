import Item from "./Item";

function List() {
  return (
    <>
      <ul>
        <Item language="Python" years_experiency={5} />
        <Item language="JavaScript" years_experiency={3} />
        <Item language="SQL" years_experiency={4} />
        <Item />
      </ul>
    </>
  )
}

export default List;