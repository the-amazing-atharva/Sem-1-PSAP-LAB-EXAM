// Write a Program to print the output like:
// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D
// A B C
// A B
// A

#include <stdio.h>

int main() {
    char c;

    for (c = 'A'; c <= 'E'; c++) {
        for (char i = 'A'; i <= c; i++) {
            printf("%c ", i);
        }
        printf("\n");
    }

    for (c = 'D'; c >= 'A'; c--) {
        for (char i = 'A'; i <= c; i++) {
            printf("%c ", i);
        }
        printf("\n");
    }

    return 0;
}
