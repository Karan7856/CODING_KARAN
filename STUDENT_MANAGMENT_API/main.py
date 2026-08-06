# from fastapi import FastAPI
# app=FastAPI()
# @app.get("/") #@ is a decorator
# def home():
#     return{
#         "message":"Welcome to Student Managment API!"
#     }

# The decorator registers the function with FastAPI. Later, when an incoming request matches the method and path, FastAPI calls that function.



# from fastapi import FastAPI
# app=FastAPI()
# @app.get("/about")
# def about():
#     return{
#         "message":"Student Managment API",
#         "developer":"Karan",
#         "version":"1.0"
#     }


# from fastapi import FastAPI
# app=FastAPI()
# @app.get("/")
# def home():
#     return{"message":"Home Page"}

# @app.get("/about")
# def about():
#     return {"message":"About Page"}

# @app.get("/students")
# def students():
#     return {"message":"All Students"}

from fastapi import FastAPI
app=FastAPI()
@app.get("/")
def home():
    return{
        "message":"Hello Karan you have stared learning fastAPI"
    }

@app.get("/teacher")
def teacher():
    return{
        "name":"Mr. Sharma",
        "subject":"Mathematics"
    }