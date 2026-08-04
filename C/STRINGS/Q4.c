//PRINTINTG OF CHARCTER ARRAY WITH NULL CHARACTER\
//NULL CHARACTER =\0
// #include <stdio.h>
// int main(){
//     // char arr[]={'H','e','l','l','o'};
//     // char ch='\0';
//     // printf("%d",ch);//null character has ascii value 0
//     int x=0;
//     char ch=(char)x; //0 jiski asii value hai woh character a k andar '\0' store ho gaya hai
//     printf("%c",ch);
//     return 0;

// }
//PRINTING OF STRINGS
#include <stdio.h>
int main(){
    char arr[]={'H','E','L','L','O','\0'};
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
}