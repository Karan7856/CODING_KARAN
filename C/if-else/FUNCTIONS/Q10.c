//SWAP TWO NUMBERS USING A THIRD VARIABLE
#include <stdio.h>
int main(){
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b:");
    scanf("%d",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("The value of a is:%d\n",a);
    printf("The value of b is:%d",b);
    return 0;

}