// Write a C program to evaluate a^b using function.

#include <stdio.h>

int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);

    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}

