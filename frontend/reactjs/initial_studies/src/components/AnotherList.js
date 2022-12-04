function AnotherList({ items }) {
  return (<>
    <h3>Lista de alimentos</h3>
    {
      items.map((item) => (
        <p key={item}>{item}</p>
      ))
    }
  </>)
}

export default AnotherList;