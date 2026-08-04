///FIND THE HEIGHT OF THE MAX heap
//BUILDING OF MAX HEAP WHEN AN ORIGINAL ARRAY IS GIVEN
//THIS CODE WILL CALCULATE THE HEIGHT AS PER THE NO OF NODES 
//TO CALCULATE THE HEIGHT OF THE HEAP AS PER THE EDGES JUST RETUURN height-1 in the code
#include <bits/stdc++.h>
using namespace std;
void Heapify(int arr[],int index,int n){
    int largest=index;
    int left=(2*index)+1;
    int right=(2*index)+2;
    if(left<n&&arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n&&arr[right]>arr[largest]){
        largest=right;
        
    }
    if(largest!=index){
        swap(arr[index],arr[largest]);
        Heapify(arr,largest,n);
    }
}
void BuildMaxHeap(int arr[],int n){
    //step down
    for(int i=(n/2)-1;i>=0;i--){
        Heapify(arr,i,n);
    }
}
void print_Heap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int heapHeight(int arr[],int n){
    if(n==1){
        return 1;
    }
    int height=0;
    while(n>0){
        n=n/2;
        height++;
    }
    return height;
}
int main(){
    int arr[]={1,3,5,6,8,9};
    BuildMaxHeap(arr,6);
    print_Heap(arr,6);
    cout<<endl;
    cout<<"The height of the heap is: ";
    cout<<heapHeight(arr,6);
}
