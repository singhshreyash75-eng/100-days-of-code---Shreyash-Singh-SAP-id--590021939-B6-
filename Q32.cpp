//32) Write a program to take a number as input and print its equivalent binary representation.


//Ans 32)


#include <stdio.h>

int main() {
    int num;
    int binary[32];  // to store binary digits (max 32 bits for int)
    int i = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;  // store remainder (0 or 1)
        num = num / 2;
        i++;
    }

    // Print binary in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

