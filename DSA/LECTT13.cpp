//IN A GIVEN ARRAY. FIND TOTAL NUMBER OF OCCURRENCES OF A NUMBER.DONT USE LINEAR SEARCH.USE BINARY SEARCH.
//NOT A BIG GAME JUST FIND OUT THE INDEX OF FIRST OCCURENECE AND INDEX OF LAST OCCURRENCE AND APPLY THE FORMULA AS SHOWN BELOW
//(INDEX OF LAST OCCURRENCE- INDEX OF FIRST OCCURENCE)+1;
#include <iostream>
using namespace std;
int FirstOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int answer=-1;
    while(start<=end){
        if(arr[mid]==key){
            answer=mid;
            end=mid-1;

        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return answer;
}
int LastOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int answer=-1;
    while(start<=end){
        if(arr[mid]==key){
            answer=mid;
            start=mid+1;

        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return answer;
}
int main(){
    int arr[]={1,2,3,3,3,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    int First_Occ=FirstOcc(arr,n,k);
    int Last_Occ=LastOcc(arr,n,k);
    int no_of_occ=(Last_Occ-First_Occ)+1;
    cout<<"First Occurence: "<<First_Occ;
    cout<<"Last Occurence: "<<Last_Occ;
    cout<<"The Number of Occurrences of 3 is: "<<no_of_occ;
}
