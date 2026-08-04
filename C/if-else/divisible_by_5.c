#include <stdio.h>
int main(){
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    if(n%5==0){
        printf("The Number is Divisible by 5");
    }
    else{
        printf("The Number is not Divisible by 5");
    }
    return 0;
}