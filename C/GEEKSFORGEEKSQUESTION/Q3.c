//Write a Program to Reverse an Array
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=n-1;i>=0;i--){
        int arry=1;
        arry=arry*A[i];
        printf("%d ",arry);
    }
    return 0;
}