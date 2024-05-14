// Write a C program to count the number of Vowels and Consonants.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowelCount = 0, consonantCount = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        } else if (c >= 'a' && c <= 'z') {
            consonantCount++;
        }
    }

    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);

    return 0;
}
