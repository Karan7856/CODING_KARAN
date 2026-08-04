#include <stdio.h>
int main(){
    float distance;
    printf("Enter Distance Between the cities: ");
    scanf("%f",&distance);
    float distance_meters=distance*1000;
    float distance_centimeter=distance*100000;
    float distance_feet=distance*3280.8399;
    float distance_inches=distance*39370.0787;
    printf("%f \n",distance_meters);
    printf("%f \n",distance_centimeter);
    printf("%f \n",distance_feet);
    printf("%f \n",distance_inches);
    return 0;



}