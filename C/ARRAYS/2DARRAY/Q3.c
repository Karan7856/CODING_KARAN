//WAP TO STORE ROLL NUMBER AND MARKS OBTAINED BY 4 STUDENTS SIDE BY SIDE IN A MATRIX
#include <stdio.h>
int main(){
    int arr[4][2]={1,40,2,50,3,60,4,70};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}