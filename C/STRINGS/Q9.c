//INITIALIZATION OF STRINGS WITH THE HELP OF POINTERS
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[]="College Wallah";
//     char* p=str;
//     *p='P';
//     printf("%s",str);
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main(){
    char *ptr="Physics Wallah";
    printf("%s\n",ptr);
    ptr="College Wallah";
    printf("%s",ptr);
}
