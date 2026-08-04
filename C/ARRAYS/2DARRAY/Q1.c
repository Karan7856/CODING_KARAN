//WAP TO STORE ROLL NUMBER AND MARKS OBTAINED BY 4 STUDENTS SIDE BY SIDE IN A MATRIX
#include <stdio.h>
int main(){
    int A[4][2]={35,80,36,85,37,90,38,95};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}