#include <stdio.h>

// int factorial(int x) {
//     int fact = 1;
//     for (int i = 2; i <= x; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int combination(int n, int r) {
//     int ncr = factorial(n) / (factorial(r) * factorial(n - r));
//     return ncr;
// }

// int main() {
//     int n;
//     printf("Enter the number of rows for Pascal's Triangle: ");
//     scanf("%d", &n);

//     // Printing Pascal's Triangle
//     for (int i = 0; i < n; i++) {
//         // Print spaces before numbers
//         for (int j = 0; j < n - i - 1; j++) {
//             printf("  ");
//         }

//         // Print numbers in a row
//         for (int j = 0; j <= i; j++) {
//             printf("%4d", combination(i, j)); // Adjust spacing for alignment
//         }

//         printf("\n");
//     }

//     return 0;
// }