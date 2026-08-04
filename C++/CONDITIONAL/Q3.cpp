//TAKE INT AS INPUT AND PRINT THE ABSOLUTE VALUE OF THAT INTEGER
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n>=0){
        cout<<n;
    }
    else{
        cout<<n*(-1);
    }
    return 0;
}