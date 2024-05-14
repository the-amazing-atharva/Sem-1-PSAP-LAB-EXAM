// Given a string, consisting of alphabets and digits, find the number of
// alphabets and digits in the given string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabets++;
        } 
        else if (isdigit(str[i])) {
            digits++;
        } 
    }

    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);

    return 0;
}
