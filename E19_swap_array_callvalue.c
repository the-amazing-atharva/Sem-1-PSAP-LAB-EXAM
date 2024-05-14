// Write a c program for swapping of two arrays using
// call by value function.

#include <stdio.h>

void swapArrays(int arr1[], int arr2[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];

    printf("Enter elements for Array 1: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements for Array 2: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    printf("\nArray 1 before swapping: ");
    displayArray(array1, size);

    printf("Array 2 before swapping: ");
    displayArray(array2, size);

    swapArrays(array1, array2, size);

    printf("\nArrays after swapping:\n");
    printf("Array 1: ");
    displayArray(array1, size);

    printf("Array 2: ");
    displayArray(array2, size);

    return 0;
}
