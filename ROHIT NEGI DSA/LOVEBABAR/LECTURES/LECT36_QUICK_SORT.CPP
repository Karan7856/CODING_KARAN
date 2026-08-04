//QUICK SORT 
#include <iostream>
using namespace std;

int partition(int arr[],int s,int e){
    
    int pivot=arr[s];
    int count=0;

    //COUNT THE NO OF ELEMENT LESS THAN PIVOT ELEMENT
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }

    int pivot_index=s+count;

    //MOVE THE PIVOT ELEMENT TO THE CORRECT PIVOT INDEX-->SWAP THE ELEMENT AT PIVOT INDEX WITH THE PIVOT ELEMENT

    swap(arr[s],arr[pivot_index]);

    //NOW PIVOT ELEMENT IS AT IT RIGHT PLACE NOW WE HAVE TO MAKE THE LEFT SIDE OF THE PIVOT ELEMENT LESS THAN PIVOT AND RIGTH SIDE OF THE PIVOT ELEMENT GREATER THAN PIVOT

    int i=0;
    int j=e;

    while(i<pivot_index&&j>pivot_index){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivot_index&&j>pivot_index){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    return pivot_index;

}
void Quicksort(int arr[],int s,int e){


    //BASE CASE->> WHEN 0 ELEMENT OR 1 ELEMENT AND 1 ELEMENT IS ALREADY SORTED

    if(s>=e){
        return;
    }

    //GET THE PIVOTINDEX WHERE THE PIVOT ELEMENT SHOULD BE PLACED

    int p=partition(arr,s,e);
    //MOVE TO LEFT PART AND SORT

    Quicksort(arr,s,p-1);

    //MOVE TO RIGHT PART AND SORT

    Quicksort(arr,p+1,e);
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Quicksort(arr,0,n-1);
    //PRINTING THE SORTED ARRAY
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}