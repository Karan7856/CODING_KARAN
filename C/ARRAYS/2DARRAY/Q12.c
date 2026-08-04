//WAP TO PRINT TRANSPOSE OF A N*N MATRIX MAKE SURE NOT TO USE ANOTHER MATRIX MAKE CHANGES IN THE EXISTING MATRIX AND ALSO ROTATE THE MATRIX BY 90 DEGREE(VERY EASY)
#include <stdio.h>

int main(){
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int mat[r][c];
    
    // Input matrix
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    // Transpose the matrix in-place
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){ // Only swap elements above the diagonal
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    
    // Output transposed matrix
    printf("Transposed Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        int j=0;
        int k=c-1;
        while(k>j){
            int temp=mat[i][j];
            mat[i][j]=mat[i][k];
            mat[i][k]=temp;
            k--;
            j++;
        }
    }
    printf("\nThe rotated matrix is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
