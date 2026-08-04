#include <stdio.h>
int main(){
    int x1,y1;
    scanf("%d %d",&x1,&y1);
    int x2,y2;
    scanf("%d %d",&x2,&y2);
    int x3,y3;
    scanf("%d %d",&x3,&y3);
    int m1=(y2-y1)/(x2-x1);
    int m2=(y3-y2)/(x3-x2);
    if(m1=m2){
        printf("The points lie in the given line");
    }
    else{
        printf("The points doesnot lie on the given line");
    }
    return 0;
}