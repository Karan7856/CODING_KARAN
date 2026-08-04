//FIND DUPLICATE ELEMENTS IN THE ARRAY
#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    int arr[6]={1,2,2,3,4,5};
    for(i=0;i<6;i++){
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                cout<<"The Duplicate elements are:"<<arr[i]<<" ";
            }
        }
    }


}