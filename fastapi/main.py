from typing import Optional

import uvicorn
from fastapi import FastAPI
from pydantic import BaseModel

app = FastAPI()
fake_items_db = [{"item_name": "Foo"}, {"item_name": "Bar"}, {"item_name": "Baz"}]


class Item(BaseModel):
    name: str
    description: Optional[str] = None
    price: float


## Common standard route with an dict return
@app.get('/')
async def root():
    return {"Hello": "World"}


## returning from params header or type-value default
@app.get('/params/{nsei}')
def get_from_parameter(nsei: str = "Adryell"):
    return {"Hello": f"{nsei}"}


## getting from hidden params (on header: /items/?skip=0&limit=10)
@app.get('/items/')
async def read_item(skip: int = 0, limit: int = 10):
    return fake_items_db[skip : skip + limit]


###using type hint
@app.get('/itemss/{itemid}')
def read_item(itemid: str, query: Optional[str] = None):
    if query:
        return {"query": query}
    return {"item": itemid}


@app.post("/items/")
async def create_item(item: Item):
    return Item(name=item.name, price=item.price)


if __name__ == "__main__":
    uvicorn.run(app, host="127.0.0.1", port=5049)

