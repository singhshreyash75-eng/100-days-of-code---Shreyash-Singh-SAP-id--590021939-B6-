//41) Write a program to find the 1’s complement of a binary number and print it.


//Ans 41) 


#include <stdio.h>

int main() {
    char binary[50];   // To store binary number as a string
    int i;

    // Input a binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find 1's complement
    for(i = 0; binary[i] != '\0'; i++) {
        if(binary[i] == '0')
            binary[i] = '1';
        else if(binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 0;
        }
    }

    // Print result
    printf("1's Complement = %s\n", binary);

    return 0;
}
