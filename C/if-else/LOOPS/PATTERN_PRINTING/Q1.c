//SOLID RECTANGLE
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int m;
    printf("Enter the value of m:");
    scanf("%d",&m);
    // ******.....upto n number of stars
    for(int i=1;i<=m;i++){    //outer loop no of lines
        for(int i=1;i<=n;i++){     // inner loop no of star in 1 line
        printf("*");
    }
    printf("\n");

    }
    
    return 0;
}