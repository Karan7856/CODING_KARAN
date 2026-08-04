#include <stdio.h>
int main(){
    float temp;
    printf("Enter the Temperature in Fahrenhite: ");
    scanf("%f",&temp);
    float temp_cel=(temp-32)*0.555555;
    printf("%f",temp_cel);
}