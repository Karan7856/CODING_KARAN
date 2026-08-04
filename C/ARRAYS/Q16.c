//FIND THE DIFFERENCE BETWEEN THE SUM OF ELEMENTS AT EVEN INDICES TO THE SUM OF ELEMENTS AT ODD INDICES
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int sum_even=0;
    int sum_odd=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum_even=sum_even+A[i];
        }
        else{
            sum_odd=sum_odd+A[i];
        }

    }
    int diff=sum_even-sum_odd;
    printf("The difference between the sum of even indices and sum of odd indeces:%d",diff);
    return 0;
    
}