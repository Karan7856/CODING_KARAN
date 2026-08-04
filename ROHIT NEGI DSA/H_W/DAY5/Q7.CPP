//7. Print n’th Fibonacci number.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<0<<" ";
    cout<<1<<" ";
    int first=0;
    int second=1;
    int third;
    for(int i=0;i<n-2;i++){
        third=first+second;
        cout<<third<<" ";
        first=second;
        second=third;
    }
    cout<<"\n";
    cout<<"The fibonacci number at position "<<n<<" is "<<third;
}