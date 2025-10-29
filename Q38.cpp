//38) Write a program to find the LCM of two numbers.


//Ans 38)




#include <stdio.h>

int main() {
    int num1, num2, max;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the greater number
    max = (num1 > num2) ? num1 : num2;

    // Loop until we find a number divisible by both
    while(1) {
        if(max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break;
        }
        ++max;
    }

    return 0;
}
