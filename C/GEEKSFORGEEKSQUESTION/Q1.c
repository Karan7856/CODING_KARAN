//Write a Program to find the size of int, float, double, and char.
#include <stdio.h>
int main(){
    int int_type;
    float float_type;
    double double_type;
    char char_type;
    printf("The size of int_type is %ld\n",sizeof(int_type));
    printf("The size of float_type is %ld\n",sizeof(float_type));
    printf("The size of double_type is %ld\n",sizeof(double_type));
    printf("The size of char_type is %ld",sizeof(char_type));
    return 0;
}