//WAP TO PRINT THE TRANSPOSE OF THE MATRIX ENTERED BY THE USER
//Method 1
// #include <stdio.h>
// int main(){
//     int r;
//     printf("Enter the row of the matrix:");
//     scanf("%d",&r);
//     int c;
//     printf("Enter the column of the matrix:");
//     scanf("%d",&c);
//     int mat[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             printf("%d ",mat[j][i]);
//         }
//         printf("\n");

//     }


// }

//METHOD 2

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
    int mat_t[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            mat_t[i][j]=mat[j][i];
        }

    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",mat_t[i][j]);
        }
        printf("\n");
    }
}

