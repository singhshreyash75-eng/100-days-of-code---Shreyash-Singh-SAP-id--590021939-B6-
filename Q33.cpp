//33) Write a program to check if a number is a palindrome.

//Ans33)



#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;              
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if the original and reversed numbers are same
    if (original == reversed)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}
