// //WAP TO PRINT AP 4,7,10,13,16.... UPTO N TERMS
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(int i=4;i<=3*n+1;i+=3){
//         cout<<i<<" ";
//     }
// }


//ALTERNATE METHOD USING SOME OTHER VARIABLE
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+3;

    }
}