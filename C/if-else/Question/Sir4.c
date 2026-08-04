// #include <stdio.h>
// int main(){
//     char ch;
//     scanf("%c",&ch);
//     // A-Z 65-90
//     // a-z 97-122
//     // 0-9 48-57
//     if(ch>=65 && ch<=90){
//         printf("%c is uppercase alphabet",ch);
//     }
//     else if(ch>=97 && ch<=122){
//         printf("%c is lowercase alphabet",ch);

//     }
// }
// CREATING A STRING IN C 
// #include <stdio.h>
// int main(){
//     char str[100];
//     printf("\nEnter the string=");
//     scanf("%[^\n]s",&str);
//     printf("\nString stored as =%s",str);
// }
//GETS FUNCTION
//fgets function
// //fgets(str,size,stream)
// #include <stdio.h>
// int main(){
//     char str[50];
//     printf("\n Enter your string=");
//     fgets(str,50,stdin);
//     fputs(str,stdout);
// }
//write a c program that print the total length of the string 
// #include <stdio.h>
// int main(){
//     char str[50];
//     printf("\n Enter your string=");
//     fgets(str,50,stdin);
//     fputs(str,stdout);
//     int i;
//     int L=0;
//     for(i=0;str[i]!='\0';i++){
//         L++;
//     }
//     printf("\nLength of string is=%d",L);
// }
//WAP TO REVERSE THE STRING
// #include <stdio.h>
// int main(){
//     chsr str[50],rev[50];
//     scanf("%[^\n]s",&str);
//     int i,j;
//     int L=0;
//     for(i=0;str[i]='\0';i++){
//         L++;
//     }
//     for(i=L-1,j=0;i>=0;i--;j++){
//         rev[j]=str[i];
//     }
//     rev[j]='\0';
//     printf("\nReverse=%s",rev);
// }
// #include <stdio.h>
// #include <string.h>
// int main(){
//     printf("%d",strcmp("KQIT","KPIT"));
// }
// #include <stdio.h>
// int main(){
//     char str[50];
//     printf("\nEnter your string=");
//     scanf("%[^\n]s",&str);
//     int i,j;
//     int L=0;
//     for(i=0;str[i]!='\0';i++)
//     {
//         L++;
//     }
//     char ch='Y';
//     for(i=0,j=L-1;i<j;i++,j--){
//         if(str[i]==str[j]){
//             ch='N';
//             break;
//         }
//     }
//     if(ch=='Y')
//     {
//         printf("\n Pallindrom string");
//     }
//     else{
//         printf("\nNot Pallindrom");
//     }
// }
//WAP TO 
// #include <stdio.h>
// int main(){
//     char str[50];
//     printf("\nEnter your string=");
//     scanf("%[^\n]s",&str);
//     int L=0,U=0,S=0,SP=0;
//     int i;
//     for(i=0;str[i]!='\0';i++)
//     {
//         if(str[i]>=65 && str[i]<=90){
//             U=U+1;
//         }
//         elseif(str[i]>=48 && str[i]<=57){
//             D=D+1;
//         }
//         elseif(str[i]>=97 && str[i]<=57){
//             S=S+1;
//         }
//         else{
//             SP=SP+1;
//         }

//     }
//     printf("\nTotal Upper Case=%d",U);
//     printf("\nTotal ")
#include<stdio.h>
int main()
{
char str[50];
printf("\nEnter your string=");//Xa1Dm$
scanf("%[^\n]s",&str);
int L=0,U=0,D=0,S=0,SP=0;
int i;
for(i=0;str[i]!='\0';i++)
{
if(str[i]>=65 && str[i]<=90)
{
U=U+1;
}
else if(str[i]>=97 && str[i]<=122)
{
L=L+1;
}
else if(str[i]>=48 && str[i]<=57)
{
D=D+1;
}
else if(str[i]==32)
{
S=S+1;
}
else
{
SP=SP+1;
}
}
printf("\nTotal Upper Case=%d",U);
printf("\nTotal Lower Case=%d",L);
printf("\nTotal Digits=%d",D);
printf("\nTotal Spaces=%d",S);
printf("\nTotal Special Chars=%d",SP);
}
