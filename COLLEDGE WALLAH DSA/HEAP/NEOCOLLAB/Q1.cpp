// Shabu is managing a fleet of delivery trucks, each with different load capacities. She organizes the trucks so that the truck with the highest capacity is always prioritized at the top of her list, forming a max heap. However, Shabu needs to retire the truck with the smallest load capacity, which is always one of the trucks at the bottom of the list.



// Help Shabu first organize the trucks in max heap order based on their load capacities, then remove the truck with the smallest capacity, and ensure the heap remains correctly arranged after the removal.

// Input format :
// The first line contains an integer n, representing the number of trucks Shabu needs to manage.

// The second line contains n space-separated integers representing the load capacities of the trucks.

// Output format :
// The output prints the load capacities of the trucks after building the max heap.

// The output prints the load capacities of the trucks after removing the truck with the smallest capacity.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// 1 ≤ load capacities ≤ 100

// Sample test cases :
// Input 1 :
// 6
// 30 15 40 10 50 25
// Output 1 :
// 50 30 40 10 15 25 
// 50 30 40 25 15 
// Input 2 :
// 4
// 60 80 70 90
// Output 2 :
// 90 80 70 60 
// 90 80 70 



#include <bits/stdc++.h>
using namespace std;
void Heapify(int arr[],int index,int n){
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
        swap(arr[largest],arr[index]);
        Heapify(arr,largest,n);
    }
}
void builMaxHeap(int arr[],int n){
    for(int i=(n-1)/2;i>=0;i--){
        Heapify(arr,i,n);
    }
}

void delete_heap(int arr[],int &n){
    int minindex=-1;
    int minvalue=INT_MAX;
    for(int i=n/2;i<n;i++){
        if(arr[i]<minvalue){
            minvalue=arr[i];
            minindex=i;
        }
    }
    if(minindex!=-1){
        arr[minindex]=arr[n-1];
        n--;
        Heapify(arr,minindex,n);
    }
}
void printHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    builMaxHeap(arr,n);
    printHeap(arr,n);
    delete_heap(arr,n);
    printHeap(arr,n);
}
