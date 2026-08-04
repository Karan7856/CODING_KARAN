//WAP TO COPY THE CONTENTS OF ONE ARRAY INTO ANOTHER IN THE REVERSE ORDER
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the Array:");
    scanf("%d",&n);
    int A[n];
    int B[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        B[i]=A[n-1-i];


       
    }
    for(int i=0;i<n;i++){
        printf("%d ",B[i]);
    }
    printf("\n");
    
    }