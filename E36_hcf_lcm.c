#include <stdio.h>

int main() {
    int num1, num2, i, hcf = 1, max;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);

    max = (num1 > num2) ? num1 : num2;

    while (1) {
        if ((max % num1 == 0) && (max % num2 == 0)) {
            printf("The LCM of %d and %d is %d.", num1, num2, max);
            break;
        }
        ++max;
    }
    return 0;

}
