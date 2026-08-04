//C Program to Convert Binary Number to Decimal
#include <stdio.h>
int Binary_to_Decimal(int n){
    int temp=n;
    int base=1;
    int dec=0;
    while(temp>0){
        int last_digit=temp%10;
        temp=temp/10;
        dec=dec+last_digit*base;
        base=base*2;
        
        
    }
    return dec;
    
    
}
int main(){
    int n;
    printf("Enter the binary number:");
    scanf("%d",&n);
    printf("The decimal number is:%d",Binary_to_Decimal(n));
    return 0;
    
}