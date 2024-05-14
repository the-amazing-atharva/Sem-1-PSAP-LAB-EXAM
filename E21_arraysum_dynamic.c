// Find the sum of two one-dimensional arrays
// using Dynamic Memory Allocation and functions.
// Array should be passed as a function argument and
// in function should perform addition of passed
// arrays.


#include <stdio.h>
#include <stdlib.h>

void sumArrays(int *arr1, int *arr2, int *sum, int size) {
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int *arr1 = (int *)malloc(size * sizeof(int));
    int *arr2 = (int *)malloc(size * sizeof(int));
    int *sum = (int *)malloc(size * sizeof(int));

    printf("Enter elements for Array 1: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", arr1 + i);
    }

    printf("Enter elements for Array 2: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", arr2 + i);
    }

    printf("Sum of Arrays: ");
    sumArrays(arr1, arr2, sum, size);

    free(arr1);
    free(arr2);
    free(sum);

    return 0;
}
