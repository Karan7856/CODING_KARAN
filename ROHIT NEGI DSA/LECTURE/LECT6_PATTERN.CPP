// Q1
// 11111
// 22222
// 33333
// 44444
// 55555

// #include <iostream>
// using namespace std;
// int main(){
//     int row;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     int col;
//     cout<<"Enter the number of column: ";
//     cin>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=0;j<col;j++){
//             cout<<i<<" ";
//         }
//         cout<<"\n";
//     }
// }



// Q2
// 12345
// 12345
// 12345
// 12345

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and column: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
// }

// Q3
// 54321
// 54321
// 54321

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=1;j--){
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
// }

// Q4
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j*j<<" ";
//         }
//         cout<<"\n";
//     }
// }

// Q5
// a b c d e
// a b c d e
// a b c d e 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=65;j<=69;j++){
//             cout<<(char)j<<"  ";
//         }
//         cout<<"\n";
//     }
// }

// Q6
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns: ";
//     cin>>n;
//     int count=0;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=5;j++){
//             count++;
//             cout<<count<<" ";
//         }
//         cout<<"\n";
//     }
// }


// Q7 
// a
// b b 
// c c c 
// d d d d 
// e e e e e 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         char name='a'+(i-1);
//         for(int j=1;j<=i;j++){
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }


// Q6
// * * * * *
// * * * *
// * * *
// * *
// *

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Q7
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}