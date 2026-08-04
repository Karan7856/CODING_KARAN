//INITIALIZATION OF STRING
// #include <stdio.h>
// int main(){
//     char arr[]="Hello";
//     int i=0;
//     while(i<5){
//         printf("%c",arr[i]);
//         i++;
//     }
// }
#include <stdio.h>
int main(){
    char arr[]="Hello my name is Karan\0";
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
}