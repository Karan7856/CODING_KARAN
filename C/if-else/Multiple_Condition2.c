#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");//Tell whether a number is divisible by 3 and 5
    scanf("%d",&n);
    if(n%5==0&&n%3==0){
        printf("The number is Divisible by 3 and 5");
    }
    else{
        printf("The number is not divisible by 3 and 5");
    }
    return 0;
}