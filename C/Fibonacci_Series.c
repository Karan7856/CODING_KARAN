#include <stdio.h>
int main(){
    int n;//total term in the series
    printf("\nEnter how many terms required");
    scanf("%d",&n);
    int f1=0,f2=1,f3;
    printf("%d",f1);
    printf("\n%d",f2);
    while(n-2>0)
    {
        f3=f1+f2;
        printf("\n%d",f3);
        t++;
        f1=f2;
        f2=f3;
        n--;
        
    }
    return 0;

}