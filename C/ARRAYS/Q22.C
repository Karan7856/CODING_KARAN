//WAP TO CHECK IS AN ARRAY CONTAINS N ELEMENTS THEN CHECK IF THE GIVEN ARRAY IS A PLAINDROME OR NOT
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the Array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n/2;i++){
        int temp1=A[i];
        int temp2=A[n-1-i];
        if(temp1!=temp2){
            printf("Not in pallindrome");
            break;
        }
        else{
            printf("In pallindrome");
            break;
        }
    }
}