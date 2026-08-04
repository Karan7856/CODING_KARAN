// Question No: 6
// Single File Programming Question
// Problem Statement



// Liam is a software developer working on a performance-tracking application for a sports team. Each player is assigned a score based on their performance in various matches. To analyze the players' performance effectively, Liam needs to sort the scores in ascending order and identify the second-highest score to determine which player is just below the top performer.



// Write a program that takes a list of player scores as input, sorts them using the heap sort algorithm, and outputs the second-highest score.

// Input format :
// The first line contains an integer n, representing the number of player scores.

// The second line contains n space-separated integers score, representing the scores of the players.

// Output format :
// The first line displays the sorted player scores in ascending order, each separated by a space.

// The second line displays "The second largest number: " followed by the second highest score.



// If the size of the array is less than 2, print: "Array must contain at least two elements".



// Refer to the sample output for the formatting specifications.

// Code constraints :
// The test cases will fall under the following constraints:

// 2 ≤ n ≤ 10

// 1 ≤ scores ≤ 1000

// Sample test cases :
// Input 1 :
// 5
// 4 3 2 1 6
// Output 1 :
// 1 2 3 4 6 
// The second largest number: 4
// Input 2 :
// 10
// 4 5 3 6 7 2 1 8 9 10
// Output 2 :
// 1 2 3 4 5 6 7 8 9 10 
// The second largest number: 9
// Input 3 :
// 1
// 4
// Output 3 :
// Array must contain at least two elements





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
    if(n<2){
        cout<<"Array must contain at least two elements";
    }
    else{
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
            
        }
    }

    cout<<endl;
}

// void delete_heap(int arr[],int &n){
//     if(n==0){
//         cout<<"Heap is empty nothing to delete";
//     }
//     cout<<"Deleted largest element: "<<arr[0];
//     cout<<endl;
//     arr[0]=arr[n-1];
//     n--;
//     if(n>0){
//         Heapify(arr,n,0);
//     }
// }
void sort_array(int arr[],int n){
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        Heapify(arr,i,0);
        
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    build_heap(arr,n);
    
    
    sort_array(arr,n);
    print(arr,n);
    
}