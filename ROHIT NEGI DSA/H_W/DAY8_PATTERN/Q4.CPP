// Q4
// F G H I J K  
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++ ){
            char ch='F'+(j-1);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}