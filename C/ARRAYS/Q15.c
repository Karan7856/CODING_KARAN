//COUNT THE NUMBER OF ELEMENTS IN GIVEN ARRAY GREATER THAN A GIVEN NUMBER X
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]>x){
            count=count+1;
        }
    }
    printf("The count of the number is:%d",count);
    return 0;
}