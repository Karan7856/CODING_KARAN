//GIVEN A MATRIX 'A' OF DIMENSIONS M*N AND 2 COORDINATES (L1,R1) AND (L2,R2).RETURN THE SUM OF THE RECTANGLE FROM (L1,R1) TO (L2,R2).
#include <stdio.h>
int main(){
    int r;
    printf("Enter row of the matrix:");
    scanf("%d",&r);
    int c;
    printf("Enter the column of the matrix:");
    scanf("%d",&c);
    int l1;
    printf("Enter the value of l1:");
    scanf("%d",&l1);
    int r1;
    printf("Enter the value of r1:");
    scanf("%d",&r1);
    int l2;
    printf("Enter the value of l2:");
    scanf("%d",&l2);
    int r2;
    printf("Enter the value of r2:");
    scanf("%d",&r2);
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum=sum+mat[i][j];
        }
    }
    printf("The sum of the matrix is:%d",sum);
}