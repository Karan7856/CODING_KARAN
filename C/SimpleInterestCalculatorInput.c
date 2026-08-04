#include<stdio.h>
int main(){
    float principle;
    printf("Enter Principle Amount: ");
    scanf("%f",&principle);
    float Rate;
    printf("Enter rate of interest: ");
    scanf("%f",&Rate);
    float time;
    printf("Enter time of duration: ");
    scanf("%f",&time);
    float simple_Interest=(principle*Rate*time)/100;
    printf("The Simple Interest is: %f",simple_Interest);
    return 0;
}