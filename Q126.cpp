//126) Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *fp;
    char text[500];
    char filename[100];

    // Take filename from user
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();  // Remove leftover newline

    // Open in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Get text to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text
    fputs(text, fp);

    printf("Text appended successfully!\n");

    fclose(fp);

    return 0;
}
