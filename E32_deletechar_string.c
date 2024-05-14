// Write a c program to Delete all occurrences of Character from the String.

#include <stdio.h>
#include <string.h>

void deleteChar(char *str, char ch) {
    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to delete: ");
    scanf("%c", &ch);

    deleteChar(str, ch);

    printf("Output: %s\n", str);

    return 0;
}
