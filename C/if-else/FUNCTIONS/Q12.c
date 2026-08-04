//WAP TO CHECK WHETHER NUMBER IS AUTOMORPHIC OR NOT(SQUARE OF A NUMBER KA LAST DIGIT IS EQUAL TO THAT NUMBER)
#include <stdio.h>
#include <math.h>
int isAutomorphic(int x,int y){
    if(x%10==y){
        printf("The number is an automorphic.");
        return 1;
    }
    else{
        printf("The number is NOT an automorphic.");
        return 0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int square=pow(n,2);
    isAutomorphic(square,n);
    return 0;
}