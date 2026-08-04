//VALUE OF (m)^n
#include <iostream>
using namespace std;
int powrr(int x,int y){
    if(y==0){
        return 1;
    }
    else{
        return x*powrr(x,y-1);
    }
}
int main(){
    int m;
    cout<<"Enter the base number: ";
    cin>>m;
    int n;
    cout<<"Enter the power: ";
    cin>>n;
    int power=powrr(m,n);
    cout<<"Power of "<<m<<" to "<<n<<" is: "<<power;
}