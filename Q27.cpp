//27) Write a program to print numbers from 1 to n.

//Ans 27



#include <stdio.h>

int main() {
    int n, i;

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);

    // Loop to print numbers
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
