// //CONSTRUCTOR
// #include <iostream>
// using namespace std;
// class Student{
// public:
//     string name;
//     int rno;
//     float gpa;
//     Student(){   //default constructor

//     }
//     Student(string s,int r,float g)
//     {
//         name=s;
//         rno=r;
//         gpa=g;
//     }
// };
// int main(){
//     Student s1("Karan Raj",53,7.5);
//     cout<<s1.name;
//     Student s2;
//     s2.name="Harsh Jha";   //THIS INITIALIZATION WILL ONLY WORK IF WE HAVE WRITTEN DEFAULT CONSTRUCTOR
//     s2.rno=43;
//     s2.gpa=8.9;
//     cout<<s1.name<<endl;
//     cout<<s2.name<<endl;
// }



//CREATING MULTIPLE CONSTRUCTOR
#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int rollno;
    float gpa;
    Student(){

    }
    Student(string n,int r){
        name=n;
        r=rollno;
    }
    Student(string n,int r,float g){      //PARAMETEISED CONSTRUCTOR
        name=n;
        rollno=r;
        gpa=g;
    }
};
int main(){
    class Student s1("Karan Raj",53);
    cout<<s1.name<<endl;
    class Student s2("Harsh Jha",43,8.0);
    cout<<s2.name<<endl;
    class Student s3;
    s3.name="Anurag";
    s3.rollno=51;
    cout<<s3.name<<endl;
    class Student s4;
    s4=s1;   //ALL DETAILS OF S1 WILL BE COPIED TO S6
    cout<<s4.name;  //IT WILL BE A DEEP COPY CHANGES IN S4 WILL NOT CHANGE S1
}