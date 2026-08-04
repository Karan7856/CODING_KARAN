#include <stdio.h>
int main(){
    int x;
    printf("Enter first integer");
    scanf("%d",&x);
    int y;
    printf("Enter second integer");
    scanf("%d",&y);
    int rem=x%y;
    printf("Remainder is : %d",rem);
    }