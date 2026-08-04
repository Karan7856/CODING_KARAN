//MERGE SORT
#include <iostream>
using namespace std;

void merge(int *arr,int s,int e){

    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;
    int *left=new int[len1];
    int *right=new int[e-mid];

    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[mainArrayIndex];
        mainArrayIndex++;
    }

    int i=0;
    int j=0;
    mainArrayIndex=s;
    while(i<len1&&j<len2){
        if(left[i]<right[j]){
            arr[mainArrayIndex]=left[i];
            mainArrayIndex++;
            i++;
        }
        else{
            arr[mainArrayIndex]=right[j];
            mainArrayIndex++;
            j++;
        }
    }

    while(i<len1){
        arr[mainArrayIndex]=left[i];
        mainArrayIndex++;
        i++;
    }

    while(j<len2){
        arr[mainArrayIndex]=right[j];
        mainArrayIndex++;
        j++;
    }




}
void mergesort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    
    //SORT LEFT PART OF THE ARRAY
    mergesort(arr,s,mid);

    //SORT THE RIGHT PART OF THE ARRAY
    mergesort(arr,mid+1,e);

    //MERGE THE SORTED LEFT PART AND SORTED RIGTH PART
    merge(arr,s,e);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}