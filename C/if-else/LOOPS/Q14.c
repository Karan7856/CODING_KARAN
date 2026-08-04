//WAP TO PRINT THE FACTORIAL OF A NUMBER
#include <stdio.h>
int main(){
    int n;
    int product=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        product=product*i;

    }
    printf("The Factorial of the given number is: %d",product);
    return 0;
}