//WRITE A PROG TO PRINT THE SUM OF A NUMBER AND ITS REVERSE
#include <stdio.h>
int main(){
    int n;
    int sum=0;
    int last_digit;
 
    printf("Enter a number: ",&n);
    scanf("%d",&n);
    int original_number=n;
    while(n>0){
        last_digit=n%10;
        sum=sum*10+last_digit;
        n=n/10;
    }
    int new_sum=sum+original_number;
    printf("The Rev of Number is:%d\n",sum);
    printf("The Sum of Number and its Reverse  is:%d",new_sum);
    return 0;

}