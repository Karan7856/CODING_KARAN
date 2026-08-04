//SUM OF N-NATURAL  NUMBER
#include <iostream>
using namespace std;

int sum(int n){
    if(n>0){
        return n+sum(n-1);
    }

}
int main(){
    int n;
    cout<<"Enter the value n: ";
    cin>>n;
    int value=sum(n);
    cout<<"The sum of n natural number is: "<<value;
}