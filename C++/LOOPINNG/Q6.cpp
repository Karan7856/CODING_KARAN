//WAP TO PRINT AP-  1,3,5,7,9.....UPTO 'n' TERMS  THERE SHOULD BE N TERMS
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1;i<=2*n-1;i=i+2){    
        cout<<i<<" ";
    }
}