//HARD PATTERN PRINTING
// Q1
//     *
//    **
//   ***
//  ****
// *****
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n-1;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// Q2

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

//Q3

// #include <iostream>
// using namespace std;
// int  main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<k<<" ";

//         }
//         cout<<endl;
//     }
// }

//Q4
#include <iostream>
using namespace std;
int  main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            char ch='A'+k-1;
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}