//gets() puts()
#include <stdio.h>
#include <string.h>
int main(){
    // char  str[]="East or West College Wallah is best";
    // // printf("%s",str);
    // puts(str);  //puts is used to print string
    char str[40];
    // scanf("%s",str);  //In this method only the first word will be considered and not the full word
    // gets(str); //entire sentence c an be input
    scanf("%[^\n]s",str);  //Another method to get string
    printf("The input string is:%s",str);
}
