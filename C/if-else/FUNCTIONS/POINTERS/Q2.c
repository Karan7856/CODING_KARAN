//CHANGING VALUE OF a WITH THE HELP OF POINTER
#include <stdio.h>
int main(){
    int a=25;
    int* x=&a;//HERE X WILL STORE THE ADDRESS OF OF CONTAINER a
    *x=7; // a is changed
    printf("%d",a);
    return 0;
}