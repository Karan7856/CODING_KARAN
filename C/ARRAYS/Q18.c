//COUNT THE NUMBER OF TRIPLETS WHOSE SUM IS EQUAL TO THE GIVEN VALUE OF X
#include <stdio.h>
int main(){
    int X;
    printf("Enter the value of X:");
    scanf("%d",&X);
    int A[8]={1,2,3,4,5,6,7,8};
    int count=0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<=8;j++){
            for(int k=j+1;k<=8;k++){
                if(A[i]+A[j]+A[k]==X){
                    count=count+1;
                    printf("(%d,%d,%d)\n",A[i],A[j],A[k]);
                    
                }
            }
        }
    }
    printf("%d",count);
    return 0;

}