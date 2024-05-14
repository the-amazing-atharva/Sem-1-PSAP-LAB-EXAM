// Write a C Program to count number of characters in the file and print every character on new line on screen.

#include <stdio.h>

int main() {
    FILE *file;
    int charCount = 0;
    char ch;

    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        printf("%c\n", ch);
        charCount++;
    }

    printf("\nTotal characters in the file: %d\n", charCount);

    fclose(file);

    return 0;
}
