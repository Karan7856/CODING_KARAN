//SELECTION SORT
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
    //before sorting array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //sorting the array
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
        cout<<"\n";
        cout<<"After "<<i<<"swap ";
        for(int i=0;i<n;i++){
            
            cout<<arr[i]<<" ";
        }
    }
}