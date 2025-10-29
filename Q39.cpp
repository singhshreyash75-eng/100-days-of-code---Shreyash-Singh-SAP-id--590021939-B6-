//39) Write a program to find the sum of digits of a number.


//Ans 39)



#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate sum of digits
    while(num != 0) {
        remainder = num % 10;   // Get last digit
        sum += remainder;       // Add to sum
        num /= 10;              // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
