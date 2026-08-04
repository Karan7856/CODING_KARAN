//WAP TO FIND THE HIGHEST FACTOR OF A NUMBER 'N'(OTHER THAN N ITSELF)
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int a;
    for(int i=1;i<n;i++){
        if(n%i==0){
            a=i;
            
        }
    }
    cout<<"The Highest Factor of n except n is:"<<a;
}