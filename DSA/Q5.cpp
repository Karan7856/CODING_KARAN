//swap alterate elements
//input {1,2,3,4,5,6}
//OUTPUT {2,1,4,3,6,5}
#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i+=2){
        int temp;
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}