//WAP TO FIND THE TOTAL NUMBER OF PAIRS IN THE ARRAY WHOSE SUM IS EQUAL TO THE GIVEN VALUE X
#include <stdio.h>
int main(){
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    int A[8]={1,2,3,4,5,6,7,8};
    int count=0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(A[i]+A[j]==x){
                count++;
            }
        }
        
    }
    printf("The pair is:%d",count);
    
    return 0;
}