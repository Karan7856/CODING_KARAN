//Display this G.P- 100,50,25,...upto'n' terms
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float a=100;
    float s=0.5;
    for(int i=0;i<=n;i++){
        printf("%.2f ",a);
        a=a*s;
    }
    return 0;

}