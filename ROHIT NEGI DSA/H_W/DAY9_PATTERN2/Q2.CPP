// Q2
//     A
//     A B
//     A B C
//     A B C D
//     A B C D E


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            char ch='A'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}