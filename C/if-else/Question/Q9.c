//WAP to print all the odd numbers from 1 to 100 using continue
// #include <stdio.h>
// int main(){
//     int n=100;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             printf("%d ",i);
//         }
        
//     }
//     return 0;
// }

//USING CONTINUE
#include <stdio.h>
int main(){
    int n=100;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        printf("%d",i);
    }
}