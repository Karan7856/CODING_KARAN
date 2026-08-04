//SWAP TWO NUMBERS WITHOUT USING NEW VARIABLE
// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter the value of a:");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the value of b:");
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("The value of a is: %d\n",a);
//     printf("The value of b is: %d",b);
//     return 0;
// }
#include <stdio.h>
#include <math.h>
int isAutomorphic(int x,int y){
    if(x%10==y){
        printf("The number is Automorphic");
    }
    else{
        printf("The number is NOT Automorphic");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int square=pow(n,2);
    isAutomorphic(square,n);
    return 0;
}