//GIVEN A MATRIX WITH ONLY 0-1. FIND THE ROW WITH THR MAXIMUM NUMBER OF 1'S
#include <stdio.h>
int main(){
    int r;
    printf("Enter the row of the matrix:");
    scanf("%d",&r);
    int c;
    printf("Enter the column of the matrix:");
    scanf("%d",&c);
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int max_count=0,row;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if(mat[i][j]==1){
                count++;
            }
            if(count>max_count){
                max_count=count;
                row=i;
            }
        }
    }
    printf("The row with max no of 1 is:%d",row);
    return 0;
}