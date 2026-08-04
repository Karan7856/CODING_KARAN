//WAP TO PRINT THE NTH FIBONACCI NUMBER
#include <stdio.h>
int main(){
    int a=1,b=1,sum=1,n;
    printf("Enter a number:");
    scanf("%d",&n);//here we have taken n>2 and not n>0 because n>0 will produce the value of (n+2)th term when we will give nthh term
    while(n>2){
        sum=a+b;
        a=b;
        b=sum;
        n--;
    }
    printf("%d",sum);
    return 0;

}