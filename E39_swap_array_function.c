// Write a c program for swapping of two arrays using function and
// check if both arrays are equal or not. Limits and numbers of both
// arrays must be accepted from user at run time.

#include <stdio.h>


void swapArrays(int arr1[], int arr2[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}


int areArraysEqual(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2];

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Before swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    swapArrays(arr1, arr2, (size1 < size2) ? size1 : size2);

    printf("After swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    if (areArraysEqual(arr1, arr2, (size1 < size2) ? size1 : size2)) {
        printf("The arrays are equal.\n");
    } else {
        printf("The arrays are not equal.\n");
    }

    return 0;
}
