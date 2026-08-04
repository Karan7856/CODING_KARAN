//WAP TO PRINT THE SUM OF  THE SERIES 1-2+3-4+5-6+7-.....upto n terms
#include <stdio.h>
int main(){
    int n;
    int sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0){
        sum=n/2;
    }
    if(n%2!=0){
        sum=(n/2)+1;
    }
    printf("%d",sum);
    return 0;

}