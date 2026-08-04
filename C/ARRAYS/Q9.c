//CALCULATE THE SUM OF ALL THE ELEMENTS IN THE GIVEN ARRAY
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+A[i];

    }
    printf("The sum of all the elements of the array is:%d",sum);
    return 0;
}