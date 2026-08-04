//COMBINATION AND PERMUTATION
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int r;
//     printf("Enter r: ");
//     scanf("%d",&r);
//     int nfact=1; //n!
//     int rfact=1; //r!
//     int nrfact=1; //(n-r)!
//     for(int i=1;i<=n;i++){
//         nfact=nfact*i;
//     }
//     for(int j=1;j<=r;j++){
//         rfact=rfact*j;
//     }
//     for(int k=1;k<=(n-r);k++){
//         nrfact=nrfact*k;
//     }


//     int ncr=nfact/(rfact*nrfact);
//     printf("%d",ncr);
//     return 0;
// }
//USING FUNCTIONS
// #include <stdio.h>
// int factorial(int x){
//     int fact=1;
//     for(int i=2;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int r;
//     printf("Enter r: ");
//     scanf("%d",&r);
//     int nfact=factorial(n); //n!
//     int rfact=factorial(r); //r!
//     int nrfact=factorial(n-r); //(n-r)!

    
//     int ncr=nfact/(rfact*nrfact);
//     printf("%d",ncr);
//     return 0;
// }
