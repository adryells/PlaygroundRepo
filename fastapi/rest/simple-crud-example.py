from typing import Optional

import uvicorn as uvicorn
from fastapi import FastAPI

from pydantic import BaseModel

app = FastAPI()


class Person(BaseModel):
    id: Optional[int]
    name: str
    age: int


persons = [
    Person(
        id=1,
        name="adryell",
        age=18
    ),
    Person(
        id=2,
        name="fulano",
        age=18
    ),
    Person(
        id=3,
        name="ciclano",
        age=18
    ),
    Person(
        id=4,
        name="beltrano",
        age=18
    ),
    Person(
        id=5,
        name="delclano",
        age=18
    ),
    Person(
        id=6,
        name="vulcano",
        age=18
    ),
    Person(
        id=7,
        name="cano",
        age=18
    ),
    Person(
        id=8,
        name="forseihd",
        age=18
    ),
    Person(
        id=9,
        name="ok",
        age=18
    ),
    Person(
        id=10,
        name="ssdfwefv",
        age=18
    ),
]


@app.get('/')
def get_profiles():
    return persons


@app.get('/profiles')
@app.get('/profiles/{id}')
def get_profile(id: int = None):
    if id:
        return persons[id - 1]
    return persons


@app.post("/add")
def add_profile(person: Person):
    person.id = len(persons + 1)
    persons.append(person)
    return f"{person} added"


@app.put('/update/{id}}')
def update_profile(id: int, name: str = None, age: int = None):
    person = persons[id - 1]

    if name:
        person.name = name
    if age:
        person.age = age

    return f"person id: {id} updated"


@app.delete('/delete/{id}')
def del_profile(id: int):
    persons.remove(persons[id - 1])
    return f"person {id} deleted"


if __name__ == '__main__':
    uvicorn.run(app, port=8081, host='127.0.0.1')
