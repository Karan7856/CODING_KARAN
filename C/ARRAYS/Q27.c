//WAP TO FIND THE UNIQUE NUMBER IN A GIVEN ARRAY WHERE ALL THE ELEMENTS ARE BEING REPEATED TWICE WITH ONE VALLUE BEINGN UNIQUE
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter the size of n:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
         scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(A[i]==A[j]){
                flag=true;

            }
        }
        if(flag==false){
            printf("The unique number is:%d",A[i]);
            break;
        }
    }
    return 0;
}