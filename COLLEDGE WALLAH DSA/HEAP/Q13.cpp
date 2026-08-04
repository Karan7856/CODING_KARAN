//FIND THE KTH SMALLEST ELEMENT
//THERE ARE 3 METHODS TO DO TTHIS QUESTION
//https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

// Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest element in the given array.

// Follow up: Don't solve it using the inbuilt sort function.

// Examples :

// Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
// Output:  7
// Explanation: 3rd smallest element in the given array is 7.
// Input: arr[] = [2, 3, 1, 20, 15], k = 4 
// Output: 15
// Explanation: 4th smallest element in the given array is 15.

//METHOD 1
//FIRST SORT THE ARRAY AND THE (K-1)TH ELEMENT WILL BE THE KTH SMALLEST ELEMENT

// #include <bits/stdc++.h>
// using namespace std;
// void heapify(int arr[],int n,int i){
//     int largest=i;
//     int left=(2*i)+1;
//     int right=(2*i)+2;
//     if(left<n&&arr[left]>arr[largest]){
//         largest=left;
//     }
//     if(right<n && arr[right]>arr[largest]){
//         largest=right;
//     }
//     if(largest!=i){
//         swap(arr[i],arr[largest]);
//         heapify(arr,n,largest);
//     }
// }
// void build_heap(int arr[],int n){
//     for(int i=(n-1)/2;i>=0;i--){
//         heapify(arr,n,i);
//     }
// }
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void heapsort(int arr[],int n){
//     for(int i=n-1;i>0;i--){
//         swap(arr[i],arr[0]);
//         heapify(arr,i,0);
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     int k;
//     cout<<"Enter the value of k: ";
//     cin>>k;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     build_heap(arr,n);
//     print(arr,n);
//     heapsort(arr,n);
//     print(arr,n);
//     cout<<"The kth smallest element is: "<<arr[k-1];

// }

//METHOD 2
//CREATE MIN HEAP THE TOP WILL CONTAIN THE FIRST SMALLEST ELEMENT DELETE THE FIRST ELEMENT AFTER THAT TOP WILL CONTAIN 2ND SMALLEST ELEMENT DELETE AGIN REPEAT UNIT K>0
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the heap: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cout<<"Enter the value of k: ";
//     cin>>k;
//     priority_queue<int,vector<int>,greater<int>>p;
//     for(int i=0;i<n;i++){
//         p.push(arr[i]);
//     }
//     int smallest;
//     while(k>0){
        
//         smallest=p.top();
//         p.pop();
//         k--;
//     }
//     cout<<"The kth smallest element is: "<<smallest;
// }

