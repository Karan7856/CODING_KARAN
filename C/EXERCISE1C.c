#include<stdio.h>
int main(){
    float sub1;
    printf("Enter marks of Physics: ");
    scanf("%f",&sub1);
    float sub2;
    printf("Enter marks of  Chemistry: ");
    scanf("%f",&sub2);
    float sub3;
    printf("Enter marks of Maths: ");
    scanf("%f",&sub3);
    float sub4;
    printf("Enter marks of IP: ");
    scanf("%f",&sub4);
    float sub5;
    printf("Enter marks of PHE: ");
    scanf("%f",&sub5);
    float aggregate_marks=sub1+sub2+sub3+sub4+sub5;
    printf("%f \n",aggregate_marks);
    float percentage=(aggregate_marks/500)*100;
    printf("%f",percentage);
    return 0;

}