//WAP TO FIND THE MINIMUM VALUE OUT OF ALL THE ELEMENTS IN THE ARRAY
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int min=A[0];
    for(int i=0;i<n;i++){
        if(min>A[i]){
            min=A[i];
        }
    }
    printf("The minimum value of element in array is:%d",min);
    return 0;
}