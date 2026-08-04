#include <stdio.h>
int main(){
    int Year;
    printf("Enter the Year:");
    scanf("%d",&Year);
    if(Year%4==0){
        printf("The YEAR is a Leap Year");
    }
    else{
        printf("The Year is not a Leap Year");
    }
    return 0;
}