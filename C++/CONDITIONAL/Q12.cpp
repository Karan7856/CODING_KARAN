//WAP TO PRINT THE GRESTEST OF THE THREE INTEGER USING NESTED IF
#include <iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter first positive number";
    cin>>n1;
    int n2;
    cout<<"Enter the second positive number:";
    cin>>n2;
    int n3;
    cout<<"Enter the third positive number:";
    cin>>n3;
    if(n1>n2){
        if(n1>n3){
            cout<<n1;
            cout<<" is the greatest among three";
        }
        else{
            cout<<n3;
            cout<<" is the greatest among three";
        }

    }
    else{
        if(n2>n3){
            cout<<n2;
            cout<<" is the greatest among three";
        }
        else{
            cout<<n3;
            cout<<" is the greatest among three";
        }
    }
    return 0;
    }