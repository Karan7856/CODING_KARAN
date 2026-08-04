//USE BINARY SEARCH AND FIND THE FIRST OCCURENECE AND LAST OCCURRENCE OF A NUMBER IN AN ARRAY
#include <iostream>
using namespace std;
int FirstOcc(int arr1[],int size,int key){
    int start=0;
    int end=size-1;
    int midpoint=start+(end-start)/2;
    int answer=-1;
    while(start<=end){
        if(arr1[midpoint]==key){
            answer=midpoint;
            end=midpoint-1;
        }
        else if(key>arr1[midpoint]){
            start=midpoint+1;
        }
        else if(key<arr1[midpoint]){
            end=midpoint-1;
        }
        midpoint=start+(end-start)/2;
    }
    return answer;
}
int LastOcc(int arr2[],int size,int key){
    int start=0;
    int end=size-1;
    int midpoint=start+(end-start)/2;
    int answer=-1;
    while(start<=end){
        if(arr2[midpoint]==key){
            answer=midpoint;
            start=midpoint+1;
        }
        else if(key>arr2[midpoint]){
            start=midpoint+1;
        }
        else if(key<arr2[midpoint]){
            end=midpoint-1;
        }
        midpoint=start+(end-start)/2;
    }
    return answer;
}
int main(){
    int even[5]={1,2,3,3,5};
    cout<<"First Occurrence of 3 is at Index "<<FirstOcc(even,5,3)<<endl;
    cout<<"The Last Occurrence of 3 is at Index "<<LastOcc(even,5,3)<<endl;
}