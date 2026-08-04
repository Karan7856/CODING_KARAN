#include <stdio.h>
int main(){
    int ram;
    printf("Enter the age of Ram:");
    scanf("%d",&ram);
    int shyam;
    printf("Enter the age of Shyam:");
    scanf("%d",&shyam);
    int ajay;
    printf("Enter the age of Ajay:");
    scanf("%d",&ajay);
    if(ram<shyam&&ram<ajay){
        printf("Ram is the youngest among three");
    }
    else if (shyam<ram&&shyam<ajay)
    {
        printf("Shyam is the youngest among three");
    }
    else{
        printf("Ajay is the youngest among the three");
    }
    return 0;
    
}