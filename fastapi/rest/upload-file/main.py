import aiofiles
import uvicorn as uvicorn
from fastapi import FastAPI, File, UploadFile, Request, Form
from fastapi.responses import HTMLResponse
from fastapi.staticfiles import StaticFiles
from fastapi.templating import Jinja2Templates
from pydantic import BaseModel

app = FastAPI()
app.mount("/static", StaticFiles(directory="static"), name="static")
templates = Jinja2Templates(directory="templates")


class AwesomeForm(BaseModel):
    username: str
    file: UploadFile

    @classmethod
    def as_form(
        cls,
        username: str = Form(...),
        file: UploadFile = File(...)
    ):
        return cls(
            username=username,
            file=file
        )


@app.get('/', response_class=HTMLResponse)
def root(request: Request):
    return templates.TemplateResponse('index.html', {"request": request})


@app.post('/', response_class=HTMLResponse)
async def post_basic_form(request: Request, file: UploadFile = File(...)):
    async with aiofiles.open("file.pdf", 'wb') as out_file:
        content = await file.read()
        await out_file.write(content)

    ###### prints ######
    print(f"{file.filename}, {file.content_type}, {file.spool_max_size}, {file.file}")
    print(content)

    ##### returns ######
    return templates.TemplateResponse("index.html", {"request": request})


if __name__ == '__main__':
    uvicorn.run(app, port=8081, host='127.0.0.1')












# @app.post("/files/")
# async def create_file(file: bytes = File(...)):
#     print(file)
#     return {"file_size": len(file)}
#

# @app.post("/uploadfile/")
# async def create_upload_file(file: UploadFile):
#     print(file.file, file.filename, file.content_type, file.spool_max_size)
#     return {"filename": file.filename}
