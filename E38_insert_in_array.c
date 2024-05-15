// Write a C program to insert a given number in the array at
// given position.

#include <stdio.h>

void insertElement(int arr[], int size, int pos, int num) {
    for (int i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
}

int main() {
    int size, pos, num;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to insert the number: ");
    scanf("%d", &pos);
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    insertElement(arr, size, pos, num);
    printf("Array after insertion: ");
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
