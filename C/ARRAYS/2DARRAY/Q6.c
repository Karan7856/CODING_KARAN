//FIND THE SUM OF A GIVEN MATRIX OF n*m
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns:");
    scanf("%d",&m);
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+mat[i][j];
        }
    }
    printf("The sum of all the elements of the matrix is: %d",sum);
    return 0;
}