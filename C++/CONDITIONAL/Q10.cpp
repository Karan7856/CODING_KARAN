//TAKE THREE POSITIVE INTEGER INPUT AND PRINT THE GREATEST OF THEM
#include <iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    int n3;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the second number:";
    cin>>n2;
    cout<<"Enter the third number:";
    cin>>n3;
    if(n1>n2&&n1>n3){
        cout<<n1;
        cout<<" is the greatest number";
    }
    if(n2>n1&&n2>n3){
        cout<<n2;
        cout<<" is the greatest number";
    }
    if(n3>n1&&n3>n2){
        cout<<n3;
        cout<<" is the greatest number";
    }
    else{
        cout<<"Every number are equal";
    }
    return 0;
}