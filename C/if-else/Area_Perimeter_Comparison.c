#include <stdio.h>
int main(){
    float L;
    printf("Enter the Length: ");
    scanf("%f",&L);
    float B;
    printf("Enter the Breath: ");
    scanf("%f",&B);
    float Area=L*B;
    float Perimeter=2*(L+B);
    if(Area>Perimeter){
        printf("The Area is greater than the Perimeter:");
    }
    else{
        printf("The Perimeter is greater than the area:");
    }
    return 0;
}