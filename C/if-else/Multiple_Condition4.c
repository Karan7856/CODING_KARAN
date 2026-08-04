#include <stdio.h>
int main(){
    int a;
    printf("Enter the first number:");
    scanf("%d",&a);
    int b;
    printf("Enter the second number:");
    scanf("%d",&b);
    int c;
    printf("Enter the third number:");
    scanf("%d",&c);
    if((a+b)>c&&(b+c)>a&&(a+c)>b){
        printf("They can be the sides of the equilateral triangle");
    }
    else{
        printf("They cannot be the sides of the equilateral triangle");
    }
}