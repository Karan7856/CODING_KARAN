// WAP TO FIND THE DUPLICATE VALUE
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]==A[j]){
                printf("%d is the duplicate value",A[i]);
            }
        }
    }
    return 0;
}