//TAKE A POSITIVE INTGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 AND 3
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer:";
    cin>>n;
    if(n%5==0&&n%3==0){
        cout<<"The Entered number is divisible by 3 and 5";
    }
    else{
        cout<<"The Entered number is not divisible by 3 and 5";
    }
    return 0;
}