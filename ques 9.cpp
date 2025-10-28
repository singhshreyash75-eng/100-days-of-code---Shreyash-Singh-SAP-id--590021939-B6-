//9) Write a program to find and display the sum of the first n natural numbers.


//Ans 9

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum using loop
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // Display the result
    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}



