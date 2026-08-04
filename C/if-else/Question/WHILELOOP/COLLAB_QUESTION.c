// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     printf("Factorial: ");
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             printf("%d ",i);
//         }
    
    
//     }
//     printf("\nOdd Fac: ");
//     for(int i=1;i<=n;i++){
//         if(n%i==0&&i%2!=0){
//             printf("%d ",i);
//         }
//     }
//     int even_fac_found = 0;
//     printf("\nEven Fac: ");
//     for(int i=2;i<=n;i++){
//         if(n%i==0&&i%2==0){
//             printf("%d ",i);
//             even_fac_found = 1;
//         }
//         if(!even_fac_found){
//         printf("Unavailable");
//         break;
//     }
//     }
//     return 0;

// }
// #include <stdio.h>

// int main() {
//     int i, j, k;
//     for (i = 1; i <= 5; i++) {
//         switch (i) {
//             case 1:
//                 j = 1;
//                 k = 4;
//                 break;
//             case 2:
//                 j = 3;
//                 k = 2;
//                 break;
//             case 3:
//                 j = 5;
//                 k = 0;
//                 break;
//             case 4:
//                 j = 7;
//                 k = 4;
//                 break;
//             case 5:
//                 j = 9;
//                 k = 6;
//                 break;
//         }
//         printf("%d ", 20 + 40 * i + j * 4 + k);
//     }
//     return 0;
// }
//WRITE A PROGRAM TO PRINT THE SERIES 20,60,104,152,204,...
//Each term increases by an additional multiple of 4 from the previous one: 40, 44, 48, 52, and so on.
// #include <stdio.h>

// int main() {
//     int n, i, term;

//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     term = 20; // First term of the series

//     printf("Series upto %d terms:\n", n);
//     for (i = 1; i <= n; i++) {
//         printf("%d ", term);
//         term += 40 + 4 * (i - 1); // Incrementing term by a multiple of 4
//     }

//     return 0;
// }
//WRITE A PROGRAM TO PRINT SECOND  LARGEST IN THE DIGIT 
// #include <stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int largest,second_largest=-1,digit,minus=-1,count=0;
//     while(num>0){
//         digit=num%10;
//         if(digit>largest){
//             second_largest=largest;
//             largest=digit;
            
//         }
//         else if(digit>second_largest&&digit<largest){
//             second_largest=digit;
//         }
//         if(digit==5){
//         count++;
//         }
//     num=num/10;
//     }
//     if(second_largest==-1||count==3){
//         printf("%d",minus);
//     }
//     else{
//         printf("%d",second_largest);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     char type;
//     scanf("%c",&type);
//     int INHH,INMM,OUTHH,OUTMM;
//     scanf("%d:%d",&INHH,&INMM);
//     scanf("%d:%d",&OUTHH,&OUTMM);
//     int entry_time_in_minutes=(INHH*60)+INMM;
//     int exit_time_in_minutes=(OUTHH*60)+OUTMM;
//     int time=exit_time_in_minutes-entry_time_in_minutes;
//     int charges=0;
//     int hour=OUTHH-INHH;
//     int extra_hour=(OUTHH-INHH)-2;
//     if(hour==0&&time<10){
//         printf("Parking Duration : %d:%d",(OUTHH-INHH),(OUTMM-INMM));
//         printf("Parking Charge: %d",charges);
//     }
//     if(0<hour<2){
//         if(type=='F'){
//             charges+=40;
//         }
//         if(type=='T'){
//             charges+=20;
//         }
//     }
//     if(hour>2){
//         if(type=='F'){
//             charges=charges+40+(extra_hour*20)+20;
//         }
//         if(type=='T'){
//             charges=charges+20+(extra_hour*10)+10;
//         }
//       }
//     printf("Parking Duration: %d:%d\n",(OUTHH-INHH),(OUTMM-INMM));
//     printf("Parking Charges: %d",charges);

//       return 0;

// }
