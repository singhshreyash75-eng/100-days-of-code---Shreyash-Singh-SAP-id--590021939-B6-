//2) Write a program to input two numbers and display their sum, difference, product, and quotient.


//Ans2

#include <stdio.h>

int main() {
    float num1, num2;  // using float to handle decimal values
    float sum, difference, product, quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check for division by zero before dividing
    if (num2 != 0)
        quotient = num1 / num2;
    else {
        printf("Division by zero is not allowed!\n");
        return 0;  // exit the program early
    }

    // Display results
    printf("\nResults:\n");
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
    printf("Quotient = %.2f\n", quotient);

    return 0;
}
