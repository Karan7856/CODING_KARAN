//WAP TO FIND THE MAX ELEMENT AND MIN ELEMENT IN A 2D ARRAY
#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns:");
    scanf("%d",&c);
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int max=mat[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<mat[i][j]){
                max=mat[i][j];
            }
        }
    }
    printf("The max element in this matrix is:%d",max);
}