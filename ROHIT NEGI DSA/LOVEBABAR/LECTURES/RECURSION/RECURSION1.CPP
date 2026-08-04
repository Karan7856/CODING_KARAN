//CODING THE RECURSION
// #include <iostream>
// using namespace std;
// void func1(int n){
//     if(n>0){
//         cout<<n<<" ";
//         func1(n-1);
//     }
// }
// int main(){
//     int x;
//     cout<<"Enter the value of x: ";
//     cin>>x;
//     func1(x);
// }


#include <iostream>
using namespace std;
void func2(int n){
    if(n>0){
        func2(n-1);
        cout<<n<<" ";
    }
}
int main(){
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    func2(x);
}