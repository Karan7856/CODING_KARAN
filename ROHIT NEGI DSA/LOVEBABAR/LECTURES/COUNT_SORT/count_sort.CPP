//COUNT SORT
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //STEP 1 FIND MAX ELEMENT IN THE ARRAY

    int max=0;
    for(int num:arr){
        if(num>max){
            max=num;
        }
    }

    //STEP2 -> CREATE COUNT ARRAY TO KEEP COUNT OF THE FREQUENCY OF THE ELEMENTS OF THE ORIGINAL ARRAY

    int count[max+1]={0};

    for(int num1:arr){
        count[num1]++;

    }

    //STEP3 -> PRINT THE SORTED ELEMENT

    for(int i=0;i<max+1;i++){
        while(count[i]>0){
             cout<<i<<" ";
             count[i]--;
        }
    }


}