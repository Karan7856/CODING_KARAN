

//INTERSECTION OF TWO ARRAY ARR1={1,2,3,4} ARR2={2,4,6,8} OUTPUT={2,4}
//PAIRSUM
//TRIPLET SUM
//SORT 0'S AND 1'S
//FIND UNIQUE ELEMNET IN AN ARRAY
#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    int arr[6]={1,2,3,4,5,5};
    for(i=0;i<6;i++){
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(i==j){
        cout<<arr[i]<<" ";
    }
    }


}

