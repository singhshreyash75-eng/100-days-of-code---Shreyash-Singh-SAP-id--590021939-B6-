//124) Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("info.txt", "r");   // Change filename if needed

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Check for word transitions
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;   // Starting a new word
            words++;
        }
        else if (isspace(ch)) {
            inWord = 0;   // Ending a word
        }
    }

    fclose(fp);

    // If file is not empty and last line doesn't end with newline
    if (characters > 0)
        lines++;

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}
