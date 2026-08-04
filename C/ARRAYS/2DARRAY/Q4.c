//WAP TO STORE 10 AT EVERY INDEX OF A 2-D MATRIX WITH 5 ROWS AND 5 COLUMNS
#include <stdio.h>
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=5;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    
}