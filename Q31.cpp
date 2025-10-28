//31) Write a program to reverse a given number.

//Ans 31

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;              // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num /= 10;                         // Remove last digit
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
