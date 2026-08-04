//AN INTEGER TAKES MORE MEMORY THAN CHARACTER INTEGER TAKES 4 BYTES AND CHARACTER TAKES 1 BYTE
#include <stdio.h>
int main(){
    char arr[4]={'A','B','C','D'};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    return 0;
}