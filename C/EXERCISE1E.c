#include <stdio.h>
int main(){
    float length,breath,radius,area1,perimeter,area_circle,pi;
    printf("Enter the length of the Rectangle: ");
    scanf("%f",&length);
    printf("Enter the breath of the rectangle: ");
    scanf("%f",&breath);
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area1=length*breath;
    printf("%f \n",area1);
    perimeter=2*(length+breath);
    printf("%f \n",perimeter);
    pi=3.1415;
    area_circle=pi*radius*radius;
    printf("%f",area_circle);
    return 0;


}