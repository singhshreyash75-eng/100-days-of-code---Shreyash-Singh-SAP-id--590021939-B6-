//28) Write a program to print the sum of the first n odd numbers.


//Ans 28


#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // nth odd number = 2*i - 1
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
