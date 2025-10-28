//29) Write a program to print the product of even numbers from 1 to n.


//Ans 29 


#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // use long long for large results

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
