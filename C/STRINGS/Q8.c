#include <stdio.h>
#include <string.h>
int main(){
    char str[]="College Wallah";
    //char* ptr=&str[0];
    char* ptr=str; //ptr now points to str[0] that is the first element
    // printf("%p\n",&str[0]);
    // printf("%p",str);  //kisi bhi string yah array ka address uske 0th index k address k equal hota hai
    int i=0;
    // while(str[i]!='\0'){
    //     printf("%c",str[i]);
    //     i++;
    // }
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }                       //PRINTING OF POINTERS WITH THE HELP OF POINTERS
    return 0;
}