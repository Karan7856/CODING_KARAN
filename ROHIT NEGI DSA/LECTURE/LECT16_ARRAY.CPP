//QUESTIONS: 1) REMOVE MINIMUM ELEMENT FROM THE ARRAY
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest_index=0;
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            smallest_index=i;
        }
    }

    for(int i=smallest_index;i<n;i++){
        int temp=arr[i+1];
        arr[i]=temp;
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}