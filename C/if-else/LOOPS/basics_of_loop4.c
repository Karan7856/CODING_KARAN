#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=10000;i++){
        for(j=1;j<=10;j++){
            if(i%j==0){
                dc++;
            }
            if(dc==10){
                printf("\n %d",i);
            }
        }
    }
    return 0;
    
}

