//Print the factorials of first ‘n’ numberS USING FUNCTION
//USING NORMAL METHOD
#include <stdio.h>
int factorial(int n){
    for(int i=1;i<=n;i++){
        int fact=1;
        for(int j=1;j<=i;j++){
            
            fact=fact*j;
            
        }
        printf("The factorial of %d is: %d\n",i,fact);
    }

}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    factorial(n);
    
}