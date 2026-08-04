//Q1
// *
// **
// ***
// ****
// *****
// #include <stdio.h>
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//             if(j>=i){
//                 break;
//             }
//         }
//         cout<<"\n";
//     }
// }



// Q2
// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

// }


// Q3
// 1
// 2 2
// 3 3 3
// 4 4 4 4 
// 5 5 5 5 5 
// 6 6 6 6 6 6
// 7 7 7 7 7 7 7

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }


// Q4
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// 6 5 4 3 2 1

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
