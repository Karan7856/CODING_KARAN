//WRITE A PROGRAM TO CREATE A CALCULATOR THAT PERFORMS BASIC ARITHMETIC OPERATIONS USING SWITCH CASE AND USING IF ELSE. THE CALCULATOR SHOULD INOUT TWO NUMBERS AND AN OPERATOR FROM USER.
// #include <iostream>
// using namespace std;
// int main(){
//     int n1;
//     cout<<"Enter 1st number:";
//     cin>>n1;
//     int n2;
//     cout<<"Enter 2nd number:";
//     cin>>n2;
//     char opr;
//     cout<<"Enter the operator:";
//     cin>>opr;
//     if(opr=='+'){
//         int add=n1+n2;
//         cout<<n1;
//         cout<<" + ";
//         cout<<n2;
//         cout<<" = ";
//         cout<<add;
//     }
//     else if(opr=='-'){
//         int sub=n1-n2;
//         cout<<n1;
//         cout<<" - ";
//         cout<<n2;
//         cout<<" = ";
//         cout<<sub;
//     }
//     else if(opr=='*'){
//         int mul=n1*n2;
//         cout<<n1;
//         cout<<" * ";
//         cout<<n2;
//         cout<<" = ";
//         cout<<mul;
//     }
//     else{
//         int div=n1/n2;
//         cout<<n1;
//         cout<<" / ";
//         cout<<n2;
//         cout<<" = ";
//         cout<<div;
//     }
// }
//SOLVING USING THE SWITCH CASE STATEMENT
#include <iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter the value of n1:";
    cin>>n1;
    int n2;
    cout<<"Enter the value of n2:";
    cin>>n2;
    char op;
    cout<<"Enter the operator";
    cin>>op;
    switch(op){
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        default:
            cout<<"Invalid Operator"<<endl;

    }
}