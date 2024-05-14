// Given a string, perform following operations on a string using function
// (Without pointer):
// 1. Find a length of a string.
// 2. Print string in reverse order.
// 3. Copy string s into s1 and print it.
// 4. Accept another string, say s2. Concatenate s and s2 and print
// concatenated string.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], s1[100], s2[100];
    int i;

    
    printf("Enter a string: ");
    scanf("%s", s);
    printf("Length of the string: %lu\n", strlen(s));


    printf("String in reverse order: ");
    for (i = strlen(s) - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");


    strcpy(s1, s);
    printf("Copied string: %s\n", s1);


    printf("Enter another string: ");
    scanf("%s", s2);
    strcat(s1, s2);
    printf("Concatenated string: %s\n", s1);

    return 0;
}
