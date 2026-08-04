//TAKE 3 NUMBER INPUT AND TELL IF THEY ARE THE SIDES OF THE TRIANGLE OR NOT
#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    if(n1+n2>n3&&n2+n3>n1&&n1+n3>n2){
        cout<<"The Entered number are the sides of a triangle";
    }
    else{
        cout<<"The Entered number are not the sides of a traingle";
    }
}