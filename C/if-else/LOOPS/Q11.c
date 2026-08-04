//WAP to print sum of all the even digits of a given number
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int ld=n%10;
        if(ld%2==0){
            sum=sum+ld;
        }
        n=n/10;
    }
    printf("The Sum of Even integer is: %d",sum);
    return 0;
    
}