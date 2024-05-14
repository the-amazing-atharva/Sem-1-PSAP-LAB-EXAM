// Given a string, perform following operations on a string using function
// (With pointer):
// 1. Find a length of a string.
// 2. Print string in reverse order.
// 3. Copy string s into s1 and print it.

#include <stdio.h>

int strlen_ptr(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void reverse_str_ptr(char *str) {
    int len = strlen_ptr(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", *(str + i));
    }
    printf("\n");
}

void strcpy_ptr(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char s[100], s1[100];
    char *p_s = s, *p_s1 = s1;

    printf("Enter a string: ");
    scanf("%s", s);

    printf("Length of the string: %d\n", strlen_ptr(p_s));

    printf("String in reverse order: ");
    reverse_str_ptr(p_s);

    strcpy_ptr(p_s1, p_s);
    printf("Copied string: %s\n", s1);

    return 0;
}
