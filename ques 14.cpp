//14) Write a program to input a year and check whether it is a leap year or not using conditional statements.


//Ans14

#include <stdio.h>

int main() {
    int year;

    // Input a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check for leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
