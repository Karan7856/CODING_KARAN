//CALCULATE THE PRODUCT OF ALL THE ELEMENTS IN  THE GIVEN ARRAY 
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int pro=1;
    for(int i=0;i<n;i++){
        pro=pro*A[i];
    }
    printf("The product of the elements of array is:%d",pro);
    return 0;
}