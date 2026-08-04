//THIS KEYWORD
// #include <iostream>
// using namespace std;
// class Cricketer{
// public:
//     string name;
//     int runs;
//     Cricketer(string n,int r){
//         name=n;
//         runs=r;
//     }
    
// };

// int main(){
//     Cricketer c1("Virat Kohli",25000);
//     Cricketer c2("Rohit Sharma",18000);
//     cout<<c1.name;
// }


#include <iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    Cricketer(string name,int runs){
        this->name=name;  //USING THIS KEYWORD
        this->runs=runs;
    }
    
};

int main(){
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit sharma",18000);
    cout<<c1.name;
}