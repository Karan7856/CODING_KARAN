//WAP TO REVERSE A GIVEN NUMBER
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=0;
    int last_digit;
    while(n>0){
        last_digit=n%10;
        sum=(sum*10)+last_digit;
        n=n/10;
    }
    cout<<"The reverse of the number is:"<<sum;

}