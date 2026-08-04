//Display this A.P-1,3,5,7,9,.....n(nth term = a+(n-1)d)
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int n1=(2*n)-1;
    for(int i=1;i<=n1;i=i+2){
        printf("%d ",i);
    }
    return 0;
}