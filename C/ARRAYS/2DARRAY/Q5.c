//WAP TO ADD TWO MATRIX
#include <stdio.h>
int main(){
    int r1;
    printf("Enter the rows of matrix1:");
    scanf("%d",&r1);
    int c1;
    printf("Enter the columns of matrix1:");
    scanf("%d",&c1);
    int mat1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    int r2;
    printf("\nEnter the rows of matrix2:");
    scanf("%d",&r2);
    int c2;
    printf("\nEnter the columns of matriz2:");
    scanf("%d",&c2);
    
    int mat2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    int mat3[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    // for(int i=0;i<r2;i++){
    //     for(int j=0;j<c2;j++){
    //         printf("%d ",mat3[i][j]);
    //     }
    //     printf("\n");
    // }
}