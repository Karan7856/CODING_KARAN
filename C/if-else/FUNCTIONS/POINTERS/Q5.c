//WRITE A FUNCTION TO COMPUTE THE GREATEST COMMON DIVIVSOR OF TWO GIVEN NUMBERS(HCF)
#include <stdio.h>
int min(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int GCD(int a,int b){
    int HCF;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            HCF=i;
        }
    }
    return HCF;
}
int main(){
    int a;
    printf("Enter the first number:");
    scanf("%d",&a);
    int b;
    printf("Enter the second nummber:");
    scanf("%d",&b);
    printf("The HCF of %d and %d is %d",a,b,GCD(a,b));
    return 0;

}
 