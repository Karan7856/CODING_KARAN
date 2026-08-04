//VERY IMPORTANT QUESTION
#include <iostream>
using namespace std;
int main(){
    int x=3,y,z;
    y=x=10;  //HERE HEIRARCHY OF ASSIGN IS RIGHT TO LEFT MEANS FIRST X WILL BE ASSIGNED 10 THEN Y WILL BE ASSIGNED 10
    z=x<10;  //HERE X<10 MEANS KYA 10<10 ANSWER IS NO THAT IS FALSE WHICH  IMPLIES 0
    cout<<x<<" "<<y<<" "<<z;
    
}