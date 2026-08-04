//Write a Program to Print the HCF and LCM
#include <stdio.h>
int main(){
    int a,b;
    int h,l;
    scanf("%d %d",&a,&b);
    int r=a*b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
        h=a;
        l=r/h;
        printf("\n HCF=%d",h);
        printf("\n LCM=%d",a);
    }
    return 0;
}