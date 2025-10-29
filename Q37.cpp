//37) Write a program to find the HCF (GCD) of two numbers.


//Ans 37)



#include <stdio.h>

int main() {
    int num1, num2, i, hcf;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find HCF using loop
    for(i = 1; i <= num1 && i <= num2; ++i) {
        // Check if i divides both numbers
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
    return 0;
}
