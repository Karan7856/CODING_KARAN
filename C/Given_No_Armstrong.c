//check if the number is armstrong or not
#include <stdio.h>
#include <math.h>
int main(){
    int n,m;
    int s=0;
    scanf("%d",&n);
    m=n;
    int d=log10(n);
    d=d+1; //This will give the actual count  of the number
    int rem;
    while(n>0)
    {
        rem=n%10;
        s=s+int(pow(rem,d));
    }
    if(s==m){
        printf("\nArmstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }

}