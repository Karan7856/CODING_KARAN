//Print nPr
#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int npr=factorial(n)/factorial(n-r);
    return npr;
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int r;
    printf("Enter the value of r:");
    scanf("%d",&r);
    printf("%d",combination(n,r));
    return 0;
}

