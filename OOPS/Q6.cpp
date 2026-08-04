//OBJECT POINTER
#include <iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
};
void change(Cricketer* c){
    // (*c).runs=21000;
    c->runs=21000;
}
int main(){
    class Cricketer c1("Virat Kohli",20000,50.5);
    cout<<c1.runs<<endl;
    change(&c1);
    cout<<c1.runs;
    // class Cricketer c2("Rohit Sharma",18000,50);
    // class Cricketer* p1=&c1;  //CREATING AN OBJECT POINTER
    // cout<<c1.runs<<endl;
    // cout<<(*p1).runs<<endl;
}
