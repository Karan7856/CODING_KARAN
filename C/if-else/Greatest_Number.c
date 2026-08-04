#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is the greatest among three");
        }
        else{
            printf("c is the greatest among the three");
        }
    }
    return 0;
}