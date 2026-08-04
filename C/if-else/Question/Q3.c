// #include <stdio.h>//Print the A.p of the number 4,7,19......upto n
// int main(){
//     int n;
//     printf("Enter a number");
//     scanf("%d",&n);
//     int n1=(2*n)-1;
//     for(int i=4;i<=n1;i=i+3){
//         printf("%d ",i);
//     }
//     return 0;
// }
//ALTERNATE METHOD WITHOUT USING MATHEMATICAL FORMULA
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a=4;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a+3;
    }
    return 0;
}