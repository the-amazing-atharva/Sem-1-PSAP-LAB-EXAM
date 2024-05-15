// Write a C program for swapping of two string

#include <stdio.h>
#include <string.h>

void swapStrings(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Before swapping:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    swapStrings(&str1, &str2);

    printf("After swapping:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    return 0;
}
