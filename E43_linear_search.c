// Write a C program to search element in given list using linear
// search . also find largest element in given array.

#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i + 1; 
        }
    }
    return -1; 
}

int findLargestElement(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = linearSearch(arr, size, key);
    if (result != -1) {
        printf("Element found at position %d.\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    int largest = findLargestElement(arr, size);
    printf("Largest element in the array: %d\n", largest);
    return 0;
}
