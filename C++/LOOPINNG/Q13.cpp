// //WAP TO PRINT ODD NUMBERS FROM 1 TO 100
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//     }
// }

//ALTERNATE USING CONTINUE
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<" ";
    }
}