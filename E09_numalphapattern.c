// 1. Write a Program to print the output like:
// 1
// 1 2
// 1 2 3
// 1 2 3 4 5
// E D C B A
// E D C B
// E D C
// E D
// E

#include <stdio.h>

int main() {
    int i, j;

    // Pattern 1
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Pattern 2
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%c ", 'E' - j + 1);
        }
        printf("\n");
    }

    return 0;
}
