//USER DEFINED DATA TYPE
#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    float gpa;
};
int main(){
    class Student s;
    s.name="Karan Raj;
    s.rno=53;
    s.gpa=7.5;
    cout<<s.name;
}