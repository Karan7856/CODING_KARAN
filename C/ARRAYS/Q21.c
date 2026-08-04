//WAP TO REVERSE THE ARRAY WITHOUT USING ANY EXTRA ARRAY
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n/2;i++){
        int temp=A[i];
        A[i]=A[n-1-i];
        A[n-1-i]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}