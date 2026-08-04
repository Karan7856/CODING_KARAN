#include <stdio.h>
int main(){
    int a=5;
    int* x=&a;//pointer declared
    printf("%p\n",x);//%p se address print hota hai a ka address print
    printf("%p",&x);//x ka address print karega
    printf("%d",*x);
    return 0;
}