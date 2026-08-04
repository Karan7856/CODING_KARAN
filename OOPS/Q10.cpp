//INHERITANCE

//INHERITANCE

///INHERITANCE ARE OF TWO TYPES SINGLE LEVEL INHERITANCE AND MULTILEVEL INHERITANCE

// #include <iostream>
// using namespace std;
// class Scooty{   //parent class or derived class
// public:
//     int topSpeed;
//     float mileage;
// private:
//     int bootspace;
// };
// class Bike :public Scooty{  //child class 
// public:
//     int gears;
// };
// int main(){
//     Bike b1;
//     b1.topSpeed=180;
//     b1.mileage=12.5;
//     b1.gears=6;
//     //b1.bootspace=12; //we cannot access private section of class scooty/
    
// }

//CREATING A VEHICLE CLASS
//SINGLE LEVEL INHERITANCE AS THERE IS ONLY ONE PARENT AND THE OTHERS ARE CHILDREN
// #include <iostream>
// using namespace std;
// class Vehicle{
// public:
//     int topSpeed;
//     float mileage;
//     string fuel;
// };
// class Car: public Vehicle{    //CHILD OF VEHICLE CLASS AS IT INHERITS THE PROPERTIES OF THE VEHICLE CLASS
// public:


// };
// class Bike : public Vehicle{  //CHILD OF VEHICLE CLASS AS IT INHERITS THE PROPERTIES OF THE VEHICLE CLASS
// public:
// };
// class Truck : public Vehicle{  //CHILD OF VEHICLE CLASS AS IT INHERITS THE PROPERTIES OF THE VEHICLE CLASS
// public:
    
// };
// int main(){
//     Bike b1;
//     b1.topSpeed=180;
//     b1.mileage=12.5;
//     b1.gears=6;
// }


//MULTILEVEL INHERITANCE

// #include <iostream>
// using namespace std;
// class Vehicle{
// public:
//     int topSpeed;
//     float mileage;
//     string fuel;
// };
// class TwoWheeler : public Vehicle{    
// public:

// };
// class Scooty : public TwoWheeler{
// public:
// };
// class Bike : public TwoWheeler{
// public:
// };

// int main(){
//     Bike b1;
//     b1.topSpeed=100;
//     b1.mileage=12.5;
//     b1.gears=6;
// }



//MULTIPLE INHERITANCE
#include <iostream>
using namespace std;
class Cricketer{
public:
    int runs;
    int wickets;
    int average;
};
class Engineer{
public:
    int experience;
    string domain;
};
class phodu: public Engineer,Cricketer{  //MULTIPLE INHERITANCE
public:
    string name;
};


int main(){
    
}