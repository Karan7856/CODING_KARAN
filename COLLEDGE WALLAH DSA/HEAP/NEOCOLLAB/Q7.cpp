// Liam is a fitness trainer who regularly records the weights of his clients to monitor their progress. To effectively analyze the data, he wants to sort the weights of his clients in ascending order and calculate the average weight. 



// He needs a program that can assist him in this task by taking a list of weights, sorting them using the heap sort algorithm, and displaying both the sorted weights and the average weight.



// Write a program that helps Liam by accepting a list of integers representing client weights, sorting them, and then calculating and displaying the average weight.

// Input format :
// The first line contains an integer n, representing the number of weights in the list.

// The second line contains n space-separated integers weights, representing the weights of the clients in kilograms.

// Output format :
// The output displays the following format:

// Print the sorted weights in ascending order, each separated by a space.
// Print the average weight in the format: Average: X, where X is the calculated average weight as a double-rounded to two decimal places.


// Refer to the sample output for the formatting specifications.

// Code constraints :
// The test cases will fall under the following constraints:

// 2 ≤ n ≤ 10

// 1 ≤ weights ≤ 1000

// Sample test cases :
// Input 1 :
// 5
// 89 25 30 16 38
// Output 1 :
// 16 25 30 38 89 
// Average: 39.60
// Input 2 :
// 10
// 36 23 18 29 21 73 19 28 31 11
// Output 2 :
// 11 18 19 21 23 28 29 31 36 73 
// Average: 28.90


// #include <bits/stdc++.h>
// using namespace std;
// void Heapify(int arr[],int n,int index){
//     int largest=index;
//     int left=(2*index)+1;
//     int right=(2*index)+2;
//     if(left<n && arr[left]>arr[largest]){
//         largest=left;
//     }
//     if(right<n && arr[right]>arr[largest]){
//         largest=right;
//     }
//     if(largest!=index){
//         swap(arr[index],arr[largest]);
//         Heapify(arr,n,largest);
//     }
// }
// void build_heap(int arr[],int n){
//     for(int i=(n/2)-1;i>=0;i--){
//         Heapify(arr,n,i);
//     }
// }

// void print(int arr[],int n){
//     if(n<2){
//         cout<<"Array must contain at least two elements";
//     }
//     else{
//         for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
            
//         }
//     }

//     cout<<endl;
// }

// // void delete_heap(int arr[],int &n){
// //     if(n==0){
// //         cout<<"Heap is empty nothing to delete";
// //     }
// //     cout<<"Deleted largest element: "<<arr[0];
// //     cout<<endl;
// //     arr[0]=arr[n-1];
// //     n--;
// //     if(n>0){
// //         Heapify(arr,n,0);
// //     }
// // }
// void sort_array(int arr[],int n){
//     for(int i=n-1;i>0;i--){
//         swap(arr[0],arr[i]);
//         Heapify(arr,i,0);
        
//     }

// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
        
//     }
//     build_heap(arr,n);
    
//     //print(arr,n);
//     //cout<<"Heap after deletion: ";
//     //delete_heap(arr,n);
//     //print(arr,n);
//     //int pro=product_heap(arr,n);
//     //cout<<"Product of remaining elements: "<<pro;
//     sort_array(arr,n);
//     print(arr,n);
    
// }

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
        swap(arr[largest],arr[index]);
        Heapify(arr,n,largest);
    }
}
void build_heap(int arr[],int n){
    for(int i=(n/2)-1;i>=0;i--){
        Heapify(arr,n,i);
    }
}
void heap_sort(int arr[],int n){
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        Heapify(arr,i,0);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
double average_weight(int arr[],int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum/n;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build_heap(arr,n);
    heap_sort(arr,n);
    print(arr,n);
    double avgr=average_weight(arr,n);
    cout<<"Average: "<<fixed<<setprecision(2)<<avgr;
}