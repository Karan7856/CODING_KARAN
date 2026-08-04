//A RAISED TO THE POWER OF B
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int a;
//     printf("Enter the value of a: ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the value of b: ");
//     scanf("%d",&b);
//     int power=pow(a,b);
//     printf("The value of a raised to the power b is: %d",power);
//     return 0;
// }
#include <stdio.h>
#include <math.h>


int main(){
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b:");
    scanf("%d",&b);
    int power=pow(a,b);
    printf("The value of a raised to the power of b is: %d",power);
    return 0;

}