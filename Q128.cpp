//128) Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *infile, *outfile;
    char ch;

    // Open input file for reading
    infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file for writing
    outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(infile);
        return 1;
    }

    // Read each character and convert to uppercase
    while ((ch = fgetc(infile)) != EOF) {
        ch = toupper(ch);   // Convert lowercase to uppercase
        fputc(ch, outfile);
    }

    printf("Conversion complete! Check output.txt\n");

    fclose(infile);
    fclose(outfile);

    return 0;
}
