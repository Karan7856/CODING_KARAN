// // WAP to check if a number is prime or not
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int a=0;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             a=1;
//             break;
//         }
//         if(a==0){
//             printf("The number is a prime number");
//         }
//         else{
//             printf("The number is a composite number");
//         }

        
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;

        }
    }
    if(a==1){
        printf("The Entered number is a composite number");
    }
    else{
        printf("The Entered number is a prime number");
    }
    return 0;
}