//FIND THE SECOND LARGEST ELEMENT IN THE GIVEN ARRAY
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int max=A[0];
    for(int i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    int s_max=A[0];
    for(int i=0;i<n;i++){
        if(A[i]!=max&&s_max<A[i]){
            s_max=A[i];
        }
    }
    printf("The second largest number is %d",s_max);
    return 0;
}

//int maxElement = *max_element(arr, arr + size);  shortcut to find the maximum element