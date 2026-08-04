//Print the table of 'n'.Here 'n' is a integer which user will  input.
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int mul=n*i;
        printf("%d ",mul);
    }
    return 0;
}