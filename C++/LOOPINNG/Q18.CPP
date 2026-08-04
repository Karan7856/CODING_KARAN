//WAP TO PRINT THE SUM OF THE DIGITS
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int sum=0;
    int last_digit;
    while(n>0){
        last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;
    }
    cout<<"The sum of the integer is:"<<sum;
}