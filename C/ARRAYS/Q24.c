//GIVEN AN ARRAY A, AND a NUMBER 'x', FIND OUT IF 'x' LIES IN THE ARRAY OR NOT,n;IF YES THEN PRINT THE INDEX
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d",&n);
//     int x;
//     printf("Enter the number which is to be searched:");
//     scanf("%d",&x);
//     int A[n];
//     int check=0;// 0 means that element is not present in array
//     for(int i=0;i<n;i++){
//         scanf("%d",&A[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(A[i]==x){
//             //printf("%d is present in the Array and its index is %d",x,i);
//             check=1;
//             break;
//             }
//     }
//     if(check==1){
//         printf("The element is present in the array");
//     }
//     else{
//         printf("The element is not present in the array");
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int x;
    printf("Enter the number which is to be searched:");
    scanf("%d",&x);
    int A[n];
    bool flag=false;// false means that element is not present in array
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        if(A[i]==x){
            //printf("%d is present in the Array and its index is %d",x,i);
            flag=true;
            break;
            }
    }
    if(flag==true){
        printf("The element is present in the array");
    }
    else{
        printf("The element is not present in the array");
    }
    return 0;
}