//TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS A THREE DIGIT NUMBER OR NOT
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer";
    cin>>n;
    if(n>99&&n<999){
        cout<<"The Entered number is a 3 digit number";
    }
    else{
        cout<<"The Entered number is not a three digit number";
    }
    return 0;
}