// Write a C program to remove a number in the array from a
// given position.

#include <stdio.h>

void removeElement(int arr[], int size, int pos) {
    for (int i = pos - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int size, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to remove the number: ");
    scanf("%d", &pos);
    removeElement(arr, size, pos);
    printf("Array after removal: ");
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
