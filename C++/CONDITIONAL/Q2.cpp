//TAKE A POSITIVE INTEGER AS INPUT AND TELL WHETHER THE NUMBER IS DIVISIBLE BY 5 OR NOT
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the positive number:";
    cin>>n;
    if(n%5==0){
        cout<<"The Entered number is divisible by 5";
    }
    else{
        cout<<"The Entered number is not divisible by 5";
    }
    return 0;
}