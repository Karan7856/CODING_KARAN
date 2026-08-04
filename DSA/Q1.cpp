//FIND MAX ELEMENT FROM AN ARRAY
#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int max;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        max=arr[0];
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"The max element is: "<<max;
    return 0;
}
