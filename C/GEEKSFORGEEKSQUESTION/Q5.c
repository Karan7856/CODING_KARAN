// C Program to Calculate Sum of Natural Numbers upto n
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;

    }
    printf("%d",sum);
    return 0;

}