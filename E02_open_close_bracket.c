#include <stdio.h>
#include <stdbool.h>

bool isValidString(char *s) {
    int openCount = 0, closeCount = 0;

    while (*s != '\0') {
        if (*s == '(' || *s == '{' || *s == '[') {
            openCount++;
        } else if (*s == ')' || *s == '}' || *s == ']') {
            closeCount++;
        }
        s++;
    }

    return openCount == closeCount;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    if (isValidString(inputString)) {
        printf("The input string is valid.\n");
    } else {
        printf("The input string is not valid.\n");
    }

    return 0;
}
