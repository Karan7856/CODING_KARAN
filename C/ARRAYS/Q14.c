//GIVEN AN ARRAY OF INTEGERS, CHANGE THEVALUE OF ALL ADD INDEXED ELEMENTS TO ITS SECOND MULTIPLE AND ALL ODD INDEXED ELEMENTS TO ITS SECONG MULTIPLE AND INCREMENT ALL EVEN INDEXED VALUE BY 10
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            A[i]=A[i]+10;
        }
        else{
            A[i]=A[i]*2;
        }
        printf("%d ",A[i]);
    }
    return 0;
    
}