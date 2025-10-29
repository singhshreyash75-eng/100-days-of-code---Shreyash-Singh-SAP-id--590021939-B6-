//40) Write a program to find the product of odd digits of a number.



//Ans 40) 


#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int hasOdd = 0;  // To check if any odd digit exists

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;    // Extract last digit
        if(digit % 2 != 0) { // Check if digit is odd
            product *= digit;
            hasOdd = 1;      // Mark that odd digit found
        }
        num /= 10;           // Remove last digit
    }

    if(hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
