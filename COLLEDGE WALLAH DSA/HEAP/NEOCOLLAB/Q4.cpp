// Question No: 4
// Single File Programming Question
// Problem Statement



// Diego is managing a collection of numbers and wants to perform a series of operations on it using a max heap. He needs to first construct a max heap, then remove the largest element from the heap, and finally compute the product of the remaining elements in the collection.



// Help Diego write a program that accomplishes these tasks efficiently.

// Input format :
// The first line contains an integer n, representing the number of elements in the collection.

// The second line contains n space-separated integers representing the elements of the collection.

// Output format :
// The first line prints "Deleted largest element: " followed by an integer, representing the deleted largest element from the heap.

// The second line prints "Product of remaining elements: " followed by a long long integer representing the product of the remaining elements in the collection.



// Refer to the sample output for the exact format.

// Code constraints :
// the test cases will fall under the following constraints:

// 1 ≤ n ≤ 10

// 1 ≤ collections ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 4 3 2 5 6
// Output 1 :
// Deleted largest element: 6
// Product of remaining elements: 120
// Input 2 :
// 8
// 25 6 1 32 20 5 12 8
// Output 2 :
// Deleted largest element: 32
// Product of remaining elements: 1440000


#include <bits/stdc++.h>
using namespace std;
void Heapify(int arr[],int n,int index){
    int largest=index;
    int left=(2*index)+1;
    int right=(2*index)+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=index){
        swap(arr[index],arr[largest]);
        Heapify(arr,n,largest);
    }
}
void build_heap(int arr[],int n){
    for(int i=(n/2)-1;i>=0;i--){
        Heapify(arr,n,i);
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// void delete_heap(int arr[], int &n){
//     if(n==0){
//         cout<<"No element in Heap to delete";
//         cout<<endl;
//     }
//     arr[0]=arr[n-1];
//     n--;
//     if(n>0){
//         Heapify(arr,n,0);
//     }
// }
void delete_heap(int arr[],int &n){
    if(n==0){
        cout<<"Heap is empty nothing to delete";
    }
    cout<<"Deleted largest element: "<<arr[0];
    cout<<endl;
    arr[0]=arr[n-1];
    n--;
    if(n>0){
        Heapify(arr,n,0);
    }
}
int product_heap(int arr[],int n){
    int product=1;
    for(int i=0;i<n;i++){
        product=product*arr[i];
    }
    return product;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    build_heap(arr,n);
    
    //print(arr,n);
    //cout<<"Heap after deletion: ";
    delete_heap(arr,n);
    //print(arr,n);
    int pro=product_heap(arr,n);
    cout<<"Product of remaining elements: "<<pro;
    
}