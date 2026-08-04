//COPY ONE STRING TO ANOTHER CREATING A DEEP COPY
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[]="College Wallah";
//     //CALCULATING THE SIZE OF STR
//     int i=0;
//     int k=0;
//     int j=0;
//     int size=0;
//     while(str[k]!='\0'){
//         size++;
//         k++;
//     }
//     printf("The size of the string is:%d",size);
//     char str2[size];
//     for(i=0;i<size;i++){
//         str2[i]=str[i];
//     }
//     printf("\n%s",str2); //we have sucessfully coopied str to str2
//     return 0;
// }
//COPYING ONE STRING TO ANOTHER WITH THE HELP OF POINTERS
#include <stdio.h>
#include <string.h>
int main(){
    char *s1="Physics Wallah";
    char* s2;
    s2=s1;
    printf("%s\n",s1);
    printf("%s\n",s2);
    return 0;
}