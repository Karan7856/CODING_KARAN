//DYNAMIC MEMORY ALLOCATION
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
int main(){
    class Cricketer c1("Virat Kohli",25000,55.2);
    //class Cricketer c2("Rohit Sharma",18000,47.8);
    class Cricketer* c2=new Cricketer("Rohit Sharma",18000,47.8);  //MEMORY IS ALLOCATED DYNNAMICALLY
    cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg;
}