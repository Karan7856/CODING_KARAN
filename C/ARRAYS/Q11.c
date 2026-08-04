// //FIND THE MAXIMUM VALUE OUT OF ALL THE ELEMENTS IN THE ARRAY
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of array:");
//     scanf("%d",&n);
//     int A[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&A[i]);
//     }
//     int max=A[0];
//     for(int i=0;i<n;i++){
//         if(max<A[i]){
//             max=A[i];
//         }
//     }
//     printf("The maximum number in the array is:%d",max);
// }
#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The max value is:%d",max);
}