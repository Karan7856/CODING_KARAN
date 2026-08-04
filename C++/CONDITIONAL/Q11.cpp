//TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 OR 3 BUT NOT DIVISIBLE BY 15
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive number:";
    cin>>n;
    if(n%5==0||n%3==0){
        if(n%15!=0){
            cout<<"The Entered number is divisible by 5 or 3 but not 15";
        }
        else{
            cout<<"The Entered number is divisible by 5 or 3 but also by 15";
        }
    }
    return 0;
}