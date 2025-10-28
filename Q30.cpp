//30) write a program to calculate the factorial of a number.


//Ans 30


#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;  // Use long long to handle large values

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        // Calculate factorial using loop
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
