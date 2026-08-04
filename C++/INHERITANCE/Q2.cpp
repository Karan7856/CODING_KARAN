// //SINGLE INHERITANCE
// //A class access property from one class
// //like there is a class named human and there is a class student the student class will inherit property from human
// #include <bits/stdc++.h>
// using namespace std;
// class Human{
//     protected:
//     string name;
//     int age;
//     public:
//     void work(){
//         cout<<"I am working \n";
//     }
// };
// class Student: public Human{
//     public:
//     int roll_number,fees;
//     Student(string name,int age,int roll_number,int fees){
//         this->name=name;
//         this->age=age;
//         this->roll_number=roll_number;
//         this->fees=fees;
//     }
    
// };
// int main(){
//     Student A1("Rohit",26,32,99);
//     A1.work();
    
// }


//CALLLING CONSTRUCTOR OF PARENT CLASS FIRST IN child CLASS
//IF THERE IS A CONTRUCTOR IN BOTH PARENT CLASS AND CHILD CLASS THE CONTRUCTOR OF PARENT CLASS WILL BE DISPLAYED FIRST AND IF THERE IS A DESTRUCTOR THEN THE DESTRUCOTR OF CHILD CLASSS WILL BE CALLED FIRST 
#include <bits/stdc++.h>
using namespace std;
class Human{
    protected:
    string name;
    int age;
    public:
    void work(){
        cout<<"I am working \n";
    }
    Human(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class Student: public Human{
    public:
    int roll_number,fees;
    Student(string name,int age,int roll_number,int fees): Human(name,age){
        // this->name=name;
        // this->age=age;
        this->roll_number=roll_number;
        this->fees=fees;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees;
    }
    
};
int main(){
    Student A1("Rohit",26,32,99);
    A1.work();
    A1.display();

    
}