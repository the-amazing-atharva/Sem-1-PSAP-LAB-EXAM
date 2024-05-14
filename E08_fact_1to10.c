// 2. Write a program to print factorial of 1 to 10 numbers.

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 10; i++) {
        int factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        printf("Factorial of %d is %d\n", i, factorial);
    }

    return 0;
}
