//PEAK INDEX IN A MOUNTAIN ARRAY
//THE ARRAY WILL BE IN MOUNTAIN FORM
//0 10 5 2   // 0 2 1 0  //3 4 5 1
#include <iostream>
using namespace std;
int main(){
    int arr[]={0,10,5,2};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    cout<<"The Highest Peak Index is:"<<start;
}