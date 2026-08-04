//TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 OR 3
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer:";
    cin>>n;
    if(n%5==0||n%3==0){
        cout<<"The number is divisible by 5 or 3";
    }
    else{
        cout<<"Not divisible by 5 or 3";
    }
}