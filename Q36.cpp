//36 Write a program to check if a number is prime.



//Ans 36)


#include <stdio.h>

int main() {
    int num, i;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop to find and print all factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
