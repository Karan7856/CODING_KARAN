// You are using GCC
#include <iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=(2*i)+1;
    int right=(2*i)+2;
    if(left<n&&arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n&&arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        int temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr,n,largest);
    }
}
void buildHeap(int arr[],int n){
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
}
void heapifyUp(int arr[],int index){
    int parent=(index-1)/2;
    if(index>0&&arr[index]>arr[parent]){
        int temp=arr[index];
        arr[index]=arr[parent];
        arr[parent]=temp;
        heapifyUp(arr,parent);
    }
}
void insertion(int arr[],int &n,int element){
    n++;
    arr[n-1]=element;
    heapifyUp(arr,n-1);
}
void deletion(int arr[],int &n){
    if(n<=0){
        return;
    }
    arr[0]=arr[n-1];
    n--;
    heapify(arr,n,0);
}
void heapsort(int arr[],int n){
    for(int i=n-1;i>0;i--){
        int temp=arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
        heapify(arr,i,0);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    buildHeap(arr,n);
    cout<<"\n";
    cout<<"Max Heap: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    insertion(arr,n,45);
    cout<<"\n";
    cout<<"After insertion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    deletion(arr,n);
    cout<<"After Deletion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    heapsort(arr,n);
    cout<<"HeapSort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}