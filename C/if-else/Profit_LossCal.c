#include <stdio.h>
int main(){
    float costprice;
    printf("Enter the cost price:");
    scanf("%f",&costprice);
    float sellingprice;
    printf("Enter the selling price:");
    scanf("%f",&sellingprice);
    float profit=sellingprice-costprice;
    float loss=costprice-sellingprice;
    if(costprice<sellingprice){
        printf("The seller has made profit of %.1f",profit);
    }
    else{
        printf("The seller has not made any profit and he is in loss %.1f",loss);
    }
    return 0;
}