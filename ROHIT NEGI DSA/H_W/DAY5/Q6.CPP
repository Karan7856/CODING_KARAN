//6. Print Sum of cube of first n natural number 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int cube;
    int sum=0;
    for(int i=0;i<=n;i++){
        cube=i*i*i;
        sum=sum+cube;
    }
    cout<<"The sumof cube of first n natural number is: "<<sum;
}