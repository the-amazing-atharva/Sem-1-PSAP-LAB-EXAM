// Write a C program to count the number of digits in
// an integer. Then print addition of all digits in the
// given number.

#include <stdio.h>

int main() {
    int num, digit, sum = 0, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int originalNum = num;

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        count++;
        num /= 10;
    }

    printf("Number of digits in %d: %d\n", originalNum, count);
    printf("Sum of digits in %d: %d\n", originalNum, sum);

    return 0;
}
