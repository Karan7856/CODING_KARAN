//INHERITANCE
#include <bits/stdc++.h>
using namespace std;
class Human{
    private:
    string religion;
    public:
    int age;
    int weight;
};
class Student: public Human{
    int roll_number;
    int fees;
};
class Teacher: public Human{
    public:
    int unique_id;
    int salary;
};
int main(){
    Teacher t1;
    t1.unique_id=23424;
    cout<<t1.unique_id;
}