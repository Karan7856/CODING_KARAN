// 2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    if(n%2==0&&n>0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}