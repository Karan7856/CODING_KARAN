//PASSING OBJECTS TO FUNCTIONS
#include <iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
    string type;

};
void print(Car c){
    cout<<c.name<<endl<<c.price<<endl<<c.type<<endl;

}
int main(){
    class Car c1;
    c1.name="Honda city";
    c1.price=2000000;
    c1.type="Sedan";
    class Car c2;
    c2.name="Maruti Swift";
    c2.price=800000;
    c2.type="HatchBack";
    class Car c3;
    c3.name="Mahindra Thar";
    c3.price=100000;
    c3.type="SUV";
    print(c1);
    print(c2);
    print(c3);
}
