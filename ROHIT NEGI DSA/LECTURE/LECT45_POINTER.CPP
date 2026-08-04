//POINTERS IN CPP
#include <iostream>
using namespace std;
int main(){
    int a=10;

    //PRINTING THE ADDRESS OF a
    cout<<&a<<"\n"; 

    //POINTER TO STORE ADDRESS OF a

    int *ptr=&a;
    cout<<ptr<<"\n";


    //DEREFRENCING OPR
    int c=10;
    int *ptr1=&c;
    cout<<*ptr1<<"\n";  //ptr wale address pe jao aur wala pe jo value rakhi hai use print kar do

    //PRINTING THE SIZE OF POINTER
    cout<<sizeof(ptr1);
}