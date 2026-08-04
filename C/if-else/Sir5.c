#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m=n;
    int s=0;
    int f;
    int r,i;
    while(n>0)
    {
        f=1;
        r=n%10;
        for(i=1,i<=r,i++)
        {
            f=f*i;
        }
        s=s+f;
        n=n/10;
    }
    if(m==s)
    {
        printf("%d is strong number",m);
    }
    else{
        printf("%d is not strong number",m)
    }
    return 0;
    
}