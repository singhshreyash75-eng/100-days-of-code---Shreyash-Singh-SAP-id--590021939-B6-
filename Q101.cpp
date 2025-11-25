// Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("\nAll substrings:\n");

    // Pick starting point
    for (int i = 0; i < n; i++) {
        // Pick ending point
        for (int j = i; j < n; j++) {
            // Print substring from i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
