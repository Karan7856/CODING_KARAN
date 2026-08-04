// //BUILDING OF MAX HEAP WHEN AN ORIGINAL ARRAY IS GIVEN
// #include <bits/stdc++.h>
// using namespace std;
// void Heapify(int arr[],int index,int n){
//     int largest=index;
//     int left=(2*index)+1;
//     int right=(2*index)+2;
//     if(left<n&&arr[left]>arr[largest]){
//         largest=left;
//     }
//     if(right<n&&arr[right]>arr[largest]){
//         largest=right;
        
//     }
//     if(largest!=index){
//         swap(arr[index],arr[largest]);
//         Heapify(arr,largest,n);
//     }
// }
// void BuildMaxHeap(int arr[],int n){
//     //step down
//     for(int i=(n/2)-1;i>=0;i--){
//         Heapify(arr,i,n);
//     }
// }
// void print_Heap(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={10,3,8,9,5,13,18,14,11,70};
//     BuildMaxHeap(arr,10);
//     print_Heap(arr,10);
// }



//NETHOD 2 WHEN ASKED TO JUST PRINT THE MAX HEAP NOTHING ELSE
// #include <iostream>
// using namespace std;

// void insert(int arr[], int& n, int value) {
//     arr[n] = value;
//     int i = n++;
//     while (i > 0 && arr[i] > arr[(i - 1) / 2]) {
//         swap(arr[i], arr[(i - 1) / 2]);
//         i = (i - 1) / 2;
//     }
// }

// void printMaxHeap(int arr[], int n) {
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int n, arr[15], heapSize = 0;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         int value;
//         cin >> value;
//         insert(arr, heapSize, value);
//     }
//     printMaxHeap(arr, heapSize);
//     return 0;
// }

//METHOD 3
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> maxHeap;
//     for(int i=0;i<n;++i){
//         int priority;
//         cin>>priority;
//         maxHeap.push_back(priority);
//         push_heap(maxHeap.begin(),maxHeap.end());
//     }
//     for(int i=0;i<n;++i){
//         cout<<maxHeap[i]<<" ";
//     }
//     cout<<endl;
// }


//MIN HEAP
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> minHeap;
    for(int i=0;i<n;i++){
        int priority;
        cin>>priority;
        minHeap.push_back(priority);
        push_heap(minHeap.begin(),minHeap.end(),greater<int>());
    }
    for(int i=0;i<n;++i){
        cout<<minHeap[i]<<" ";
    }
    cout<<endl;
}