// Write a C program to accept two matrices and check if they are equal
// or not. Order of both matrices must be accepted from user at run
// time.

#include <stdio.h>

void inputMatrix(int matrix[][100], int rows, int cols) {
    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    scanf("%d", &matrix[i][j]);
    }
    }
}

int areMatricesEqual(int matrix1[][100], int matrix2[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    if (matrix1[i][j] != matrix2[i][j]) {
    return 0; 
    }
}
    return 1; 
}
}

int main() {
    int rows, cols;
   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
    printf("Invalid dimensions. Please enter valid values.\n");
    return 1;
    }
    int matrix1[100][100], matrix2[100][100];


    printf("For Matrix 1:\n");
    inputMatrix(matrix1, rows, cols);

    printf("For Matrix 2:\n");
    inputMatrix(matrix2, rows, cols);
    
    if (areMatricesEqual(matrix1, matrix2, rows, cols)) {
    printf("Matrices are equal.\n");
    } else {
    printf("Matrices are not equal.\n");
    }
    return 0;
}