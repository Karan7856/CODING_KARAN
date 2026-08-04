//Write a program that print the table of 1 to 10(1 2 3 4 5 6 7 8 9 10)
//2 4 6 8 10 12 14 16 18 20
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;i<=10;j++)
        {
            printf("%d",i*j);
            printf("\t");
        }
        printf("\n");
    }
}
