// #include <stdio.h>
// int main(){
//     float basicsal;
//     printf("Enter Your Basic Salary: ");
//     scanf("%f",&basicsal);
//     float dearnessallowance=0.4*basicsal;
//     float houserentallownance=0.2*basicsal;
//     float grosssal=dearnessallowance+houserentallownance+basicsal;
//     printf("%f",grosssal);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int type;
//     scanf("%d",&type);
//     int speed;
//     scanf("%d",&speed);
//     switch (type){
//         case 1:
//             if(speed<25){
//                 printf("Below");
//             }
//             else if(speed==25){
//                 printf("Normal");
//             }
//             else{
//                 printf("Above");
//             }
//             break;
//         case 2 :
//             if(speed<35){
//                 printf("Below");
//             }
//             else if(speed==35){
//                 printf("Normal");
//             }
//             else{
//                 printf("Above");
//             }
//             break;
//         case 3:
//             if(speed<55){
//                 printf("Below");
//             }
//             else if(speed==55){
//                 printf("Normal");
//             }
//             else{
//                 printf("Above");
//             }
//             break;
            


//     }
//     return 0;
// }
// #include <stdio.h>
// int rev=0;
// int reverse(int x);
// int main(){
//     int n;
//     printf("\n Enter the value=");
//     scanf("%d",&n);
// int r=reverse(n);
// printf("\n Reverse of %d is = %d",n,r);
// }
// int reverse (int x){
//     if(x>0){
//         rem=x%10;
//         rev=rev*10+rem;
//         x=x/10;
//         reverse(x);
//     }
//     remen rev;
// }
// }
//WRITE A PROGRAM TO FIND THE GCD OF A NUMBER WITHOUT USING  RECURSION(ECLUDIOM ALGORITH)
// #include <stdio.h>
// int GCD(int x ,int y);
// int main(){
//     int main(){
//         int a,b;
//         printf("\n Enter the values of a and b\n")
//         scanf("%d %d",&a,&b);
//         int r=GCD(a,b);
//     int r=GCD(a,b);
//     printf("\n GCD of %d and %d is=%d",a,b,r);
//     int GCD(int x, int y);
//     {
//         if(x==0)
//         {
//             return y;
//         }
//         else{
//             return GCD(y %x ,x);

//         }
//     }
//     }
// }
//WRITE A PROGRAM TO CONVERT BINARY TO DECIMAL
// #include <stdio.h>
// int main(){
//     int n;
//     int b;
//     printf("\n Enter the number: ");
//     scanf("%d",&n);
//     b=0;
//     int r,m=1;
//     while(n!=0)
//     {
//         r=n%2;
//         b=b+(r*m);
//         m=m*10;
//         n=n/2;
        
//     }
//     printf("\n Binary value=%d",b);
// }
// CEIL FUNCTION RETURNS THE SMALLEST INTEGER VALUE GREATER THAN OR EQUAL TO X
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     double x,y;
//     printf("\n Enter The value of x and y=");
//     scanf("%lf",&x,&y);
//     double r;
//     r=pow(x,y);
//     printf("\n Res=% 0.1lf",r);
// }
//MODF - THIS LIBRARY FUNCTION ACCEPTS TWO DOUBLE TYPE INPUT SAY X AND FRCATION AND RETURNS THE FRACTION COMPOENT AND SETS THE RESULTS TO DISPLAY
#include <stdio.h>
// #include <math.h>
// int main(){
//     double x ,a,b;
//     x=8.1234567;
//     b=modf(x,&a);
//     printf("\n %lf",a);
//     printf("\n %lf",b);
// }
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double x,res;
//     scanf("%lf",&x);
//     res=cos(x);
//     printf("\n %lf",res);
// }
#include <stdio.h>
int even=0;
int odd=0;
void check(int n);
int main()
{
    int a=36723894;
    check(a);
}
void check(int n)
{
    if(n>0)
    {
        r=n%10;
        if(r%2==0)
        {
            even++
        }
        else
        {
            0++;
        }
        
    }
   
}


