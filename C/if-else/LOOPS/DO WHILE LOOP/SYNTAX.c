#include <stdio.h>
int main(){
    int i=1;
    do{
        printf("Hello\n"); //There is no difference between while loop and do while loop if you want to print anything anyhow 1 time then use do while loop else use while loop
        i++;
    } while(i<10);
    return 0;
}