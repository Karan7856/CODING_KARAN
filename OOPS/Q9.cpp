//ACCESS MODIFIERS
//THERE ARE THREE TYPES OF ACCESS MODIFIERS 1.PUBLIC 2.PRIVATE 3.protected
#include <iostream>
using namespace std;
class Student{
    int rollno;
    string name;
    float marks;
}
using namespace std;
int main(){
    Student s1;
    s1.name="Karan Raj";   //THIS CODE WILL GIVE ERROR AS WE HAVE NOT ASSIGNED PUBLIC OR PRIVATE.
}




#include <iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;
    void display(){
        cout<<name<<" "<<marks<<" "<<rno<<endl;
    }
private:
    float marks;
};
int main(){
    Student s1;
    s1.rno=76;
    s1.name="Karan Raj";
    cout<<s1.marks<<endl;  //this will give error as marks is defined under private class
    s1.display();
    
}





#include <iostream>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    Student(){
        
    }
    Student(int r,string n,float m){
        rollno=r;
        name=n;
        marks=m;
    }
    void display(){
        cout<<rollno<<" "<<name<<" "<<marks<<" ";
    }
    float getmarks(){
        return marks;
    }
    void setmarks(float m){
        marks=m;
    }
private:
    float marks;
};
int main(){
    Student s1;
    s1.rollno=53;
    s1.name="Karan";
    cout<<s1.rollno<<endl;
    cout<<s1.name<<endl;
    //ACCESSING PRIVATE SECTION BY CREATING A CONSTRUCTOR
    Student s2(54,"Ayush",88);
    s2.display();
    cout<<endl;
    
    // NOW LETS USE getter and setter to get marks printed using getter function and to update marks using setter function
    cout<<s2.getmarks();
    cout<<endl;
    //updating using setter
    s2.setmarks(90);
    cout<<"Updated marks using getter  "<<s2.getmarks();
    
    
    
    
}