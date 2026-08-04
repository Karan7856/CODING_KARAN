//WAP TO PRINT G.P 1,2,4,8,16,32,...UPTO 'N' TERMS
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*2;
    }
}