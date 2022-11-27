function Person({ name, age, job, picture }) {
  return (
    <div>
      <h2>{name}</h2>
      <img src={picture} alt={name} />
      <p>{job}, {age} Anos</p>
    </div>
  )
}

export default Person;