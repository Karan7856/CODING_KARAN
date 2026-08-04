//WAP TO PRINT THE ROW NUMBER HAVING THE MAX SUM IN A GIVEN MATRIX
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
    int max_row=0,index;
    for(int i=0;i<r;i++){
        int sum_row=0;
        for(int j=0;j<c;j++){
            sum_row=sum_row+mat[i][j];
        }
        if(sum_row>max_row){
            max_row=sum_row;
            index=i+1;


        }

    }
    printf("The row which has the max sum is row number:%d",index);
    return 0;

    
}