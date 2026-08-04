// //WAP TO CHECK IF A NUMBER IS COMPOSITE OR NOT
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     int count=0;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//     if(count>2){
//         cout<<"The Entered number is a composite number";
//     }
//     else{
//         cout<<"The Entered number is not a composite number";
//     }
// }


//ALTERNATE METHOD  //PREFER THE ABOVE METHOD
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"The Entered number is a composite number";
            break;
        }

    }
}