//42) Write a program to swap the first and last digit of a number.



//Ans 42)



#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;  // Get last digit

    // Find number of digits
    digits = (int)log10(num);

    // Get first digit
    first = num / (int)pow(10, digits);

    // Swap first and last digits
    swapped = last * (int)pow(10, digits) +
              (num % (int)pow(10, digits)) / 10 * 10 +
              first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
