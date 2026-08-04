#include <stdio.h>
int main(){
    int x;
    printf("Enter x value: ");
    scanf("%d",&x);
    int y;
    printf("Enter y value: ");
    scanf("%d",&y);
    int modulo=x%y;
    printf("%d",modulo);
    return 0;
}