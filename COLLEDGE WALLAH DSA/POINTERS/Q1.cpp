//POINTERS LECT24
//POINTERS ARE VARIABLE USED TO STORE THE ADDRESS OF ANOTHER VARIABLE
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x=10;
    int* ptr=&x;
    cout<<"The address of the varialble x is: "<<ptr;
}