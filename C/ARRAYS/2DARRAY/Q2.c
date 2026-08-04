//INITIALIZATION OF 2-D ARRAY
#include <stdio.h>
int main(){
    int r;
    printf("Enter the no of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter the no of columns:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n");

    return 0;
}