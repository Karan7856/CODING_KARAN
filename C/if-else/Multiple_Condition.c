#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");  //print wheather a given no is a three digit number
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("The Given input number is a Three Digit Number");

    }
    else{
        printf("The Given Number is not a Three Digit Number");
    }
}