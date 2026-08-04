//WAP TO MULTIPLY TWO MATRIX
#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of rows in the matrix:");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns of the matrix:");
    scanf("%d",&c);
    int arr1[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[r][c]);
        }
    }
    int arr2[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[r][c]);
        }
    }  
    int res[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&res[r][c]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j]=arr1[i][j]*arr2[i][j]+arr[i][j+1]*arr[i+1][j];
        }
    }
}