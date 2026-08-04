//REVERSE A STRING
#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    puts("Enter a string");
    scanf("%[^\n]s",str);
    puts("The size of string is:"); //automaticaaly \n bhi de deta hai
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    printf("%d\n",size); //printing size of string
    int nayasize=size;
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp;
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;

    }
    puts("The reverse string is:");
    puts(str);
    
    return 0;
}