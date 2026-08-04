//STATIC AND GLOBAL VARIABLES IN RECURSION
// #include <iostream>
// using namespace std;
// int func1(int n){
//     static int x=0;
//     if(n>0){
//         x++;
//         return func1(n-1)+x;   //X WILL BE ADDED AT RETURN TIME NOT CALL TIME OF FUNCTIONS
//     }
//     return 0;
// }
// int main(){
//     int a;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     int value=func1(a);
//     cout<<value;
// }


#include <iostream>
using namespace std;
int x=0;//global variable
int func1(int n){
    if(n>0){
        x++;
        return func1(n-1)+x;   //X WILL BE ADDED AT RETURN TIME NOT CALL TIME OF FUNCTIONS
    }
    return 0;
}
int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    int value=func1(a);
    cout<<value;
}