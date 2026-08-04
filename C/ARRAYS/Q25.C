//GIVEN AN ARRAY CONTAINING ELEMENTS FROM 1 TO 100 EXCEPT ONE ELEMENT IN THIS RANGE IS MISSING. FIND THE MISSING ELEMENT
#include <stdio.h>
int main(){
    int A[99];
    for(int i=0;i<99;i++){
        for(int j=1;j<=100;j++){
            A[i]=j;
            break;
        }
    }
}