//WAP TO PRINT THE SUM OF ALL THE EVEN DIGITS OF A GIVEN NUMBER
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;;
    int sum=0;
    int last_digit;
    while(n>0){
        last_digit=n%10;
        if(last_digit%2==0){
            sum=sum+last_digit;
        }
        n=n/10;
    }
    cout<<"The sum of even number is:"<<sum;
}