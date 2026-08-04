//ROTARE THE GIVEN ARRAY 'a' BY k STEPS , WHERE k IS NON-NEGATIVE
//NOTE: k CAN BE GREATER THAN n AS WELL WHERE n IS TEH SIZE OF ARRAY 'a'.
#include <stdio.h>
int reverse(int A[],int start,int end){
    while(start<end){
        int temp=A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--;
    }
    return 1;

}
int main(){
    int k;
    printf("Enter the steps to be rotated:");
    scanf("%d",&k);
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    if(k>n){
        k=k%n;
    }
    reverse(A,0,n-1);
    reverse(A,0,k-1);
    reverse(A,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}