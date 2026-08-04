// 5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=65;
    while(i<=n){
        cout<<char(i)<<" ";
        i++;
    }
}