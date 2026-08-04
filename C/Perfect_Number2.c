//print all perfect number from 1 to 100
#include <stdio.h>
int main(){
    int t;//t is the total
    int a,b;
    scanf("%d%d",&a,&b);
    int i,j;
    printf("List of Perfect numbers between %d and %d",a,b);
    for(i==a;i<=b;i++)
    {
        t=0;
        for(j=1;j<=i;j++);
        {
            if (i % j==0)
            {
                t=t+j;
            }
        }
        if(t==i)
        {
            printf("\n%d",i);
        }
        
    }
    return 0;

}