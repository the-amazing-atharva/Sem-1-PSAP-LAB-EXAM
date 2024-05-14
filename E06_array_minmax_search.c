// Accept limit of array from user. As per the limit, read integer elements in
// array. Then print :
// 1. Minimum, Maximum number from array.
// 2. Search for a particular number from array.

#include <stdio.h>

int main() {
    int limit, arr[100], i, num, found = 0, min, max;

    printf("Enter the limit of the array: ");
    scanf("%d", &limit);

    printf("Enter %d integer elements:\n", limit);
    for (i = 0; i < limit; i++) {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];
    for (i = 1; i < limit; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for (i = 0; i < limit; i++) {
        if (arr[i] == num) {
            printf("Number found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Number not found in the array\n");
    }

    return 0;
}
