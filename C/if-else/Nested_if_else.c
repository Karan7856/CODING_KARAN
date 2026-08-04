#include <stdio.h>
int main(){
    int a;
    printf("Enter the integer:");
    scanf("%d",&a);
    if(a%3==0||a%5==0){
        if(a%15!=0){
            printf("The number is divisible by 3 or 5 but not divisibel by 15");

        }
        else{
            printf("The number is divisible by 15");
        }
    }
    else{
        printf("The number is neither divisible by 3 or 5");
    }
    return 0;
}