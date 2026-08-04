// 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=2;
    bool flag=true;
    while(i<n){
        if(n%i==0){
            flag=false;
        }
        i++;
    }
    if(flag==false){
        cout<<"The number is composite number";
    }
    else{
        cout<<"The number is prime number";
    }
}