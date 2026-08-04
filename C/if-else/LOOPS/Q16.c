//WAP TO PRINT THE POWER OF A NUMBER TO ANOTHER NUMBER
#include <stdio.h>
int main(){
    int a,b,product=1;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        product=product*a;


    }
    printf("%d",product);
    return 0;
}