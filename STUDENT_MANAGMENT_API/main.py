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

# from fastapi import FastAPI
# app=FastAPI()
# @app.get("/")
# def home():
#     return{
#         "message":"Hello Karan you have stared learning fastAPI"
#     }

# @app.get("/teacher")
# def teacher():
#     return{
#         "name":"Mr. Sharma",
#         "subject":"Mathematics"
#     }





# from fastapi import FastAPI
# app=FastAPI()
# @app.get("/")
# def home():
#     return{
#         "message":"Student Managment API"
#     }

# @app.get("/students")
# def get_students():
#     return{
#         "students":["Rahul","Priya","Amit"]
#     }

# @app.post("/students")
# def create_students():
#     return{
#         "message":"Student Created Sucessfully"
#     }

# @app.put("\students")
# def update_student():
#     return{
#         "message":"Students Updated Sucessfully"
#     }

# @app.delete("/students")
# def delete_students():
#     return{
#         "message":"Student Deleted Sucessfully"
#     }




#NOW WE ARE LEARNING THE REQUEST BODY WHICH MEANS HOW ACTUALL DATA IS TRANSFERRED FROM CLIENT TO THE BACKEND
# from fastapi import FastAPI
# from pydantic import BaseModel 
# app=FastAPI()
# class Student(BaseModel):
#     name:str
#     age:int
#     email:str
# @app.get("/")
# def home():
#     return{
#         "message":"Student Managment API"
#     }

# @app.post("/students")
# def create_student(student:Student):
#     return student


#CODE TO DEMONSTRATE PATH PARAMETERS
# @app.get("/students/{student_id}")
# def get_student(student_id:int):
#     return{
#         "student_id":student_id
#     }

# CODE TO DEMONSTRATE QUERY PARAMETER
# @app.get("/students")
# def get_students(department:str):
#     return{
#         "department":department
#     }


#LETS COMBINE ALL TOGHTHER PATH
#PATH PARAMETER, QUERY PARAMETER, RESPONsE BODY
# from fastapi import FastAPI
# from pydantic import BaseModel
# app=FastAPI()

# class Student(BaseModel):
#     name:str
#     age:int
#     email:str

# @app.get("/students/{student_id}")
# def get_student(student_id:int):
#     return{
#         "student_id":student_id
#     }

# @app.get("/students")
# def get_students(
#     department:str|None=None,
#     page:int=1
#     ):
#     return{
#         "department":department,
#         "page":page
#     }

# @app.post("/students")
# def create_student(student:Student):
#     return student

# from fastapi import FastAPI
# from pydantic import BaseModel
# app=FastAPI()

# class Student(BaseModel):
#     name:str
#     age:int
#     email:str
#     pocket_money:int 

# @app.get("/students/{student_id}")
# def get_student(student_id:int):
#     return{
#         "student_id":student_id
#     }

# @app.get("/students")
# def get_students(department:str|None=None,page:int=1):
#     return{
#         "department":department,
#         "page":page
#     }

# @app.post("/students")
# def create_student(student:Student):
#     return student


#MODULE-5
from fastapi import FastAPI,HTTPException
from pydantic import BaseModel

app=FastAPI()

class Student(BaseModel):
    name:str
    age:int
    email:str
    department:str

students=[]

next_id=1

@app.get("/")
def home():
    return{
        "message":"Student Managment API"
    }

@app.post("/students")
def create_student(student:Student):
    global next_id

    new_student={
        "id":next_id,
        "name":student.name,
        "age":student.age,
        "email":student.email,
        "department":student.department
    }

    students.append(new_student)
    next_id+=1

    return new_student

@app.get("/students")
def get_students():
    return students

@app.get("/students/{student_id}")
def get_student(student_id:int):
    for student in students:
        if student["id"]==student_id:
            return student

        raise HTTPException(
            status_code=404,
            detail="Student not found"
        )

@app.put("/students/{student_id}")
def update_student(student_id:int,student:Student):
    for existing_student in students:
        if existing_student["id"]==student_id:
            existing_student["name"]=student.name
            existing_student["age"]=student.age
            existing_student["department"]=student.email
            return existing_student
        raise HTTPException(
            status_code=404,
            details="Student not found"
        )