//Factorial of 1=1
// Factorial of 2=2
// Factorial of 3 = 6
#include <stdio.h>
int main(){
    int i,j,f;
    for(i=1;i<=10;i++)
    {
        f=1;
        for(j=1;i<=1;j++)
        {
            f=f*j;
        }
    printf("\n Factorial of %d is =%d",i,f);
    }
}