// Perform following operations on 2D Matrix:
// 2. Accept number of rows and columns of two
// matrices and read elements of both matrices.
// 3. Print Transpose of both matrices.
// 4. Print Diagonal elements of both matrices.

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    int matrix1[100][100], matrix2[100][100];

    
    printf("Enter the number of rows and columns for Matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

   
    printf("Enter the elements of Matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for Matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter the elements of Matrix 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nTranspose of Matrix 1:\n");
    for (int i = 0; i < cols1; i++) {
        for (int j = 0; j < rows1; j++) {
            printf("%d ", matrix1[j][i]);
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix 2:\n");
    for (int i = 0; i < cols2; i++) {
        for (int j = 0; j < rows2; j++) {
            printf("%d ", matrix2[j][i]);
        }
        printf("\n");
    }

    printf("\nDiagonal elements of Matrix 1:\n");
    for (int i = 0; i < rows1 && i < cols1; i++) {
        printf("%d ", matrix1[i][i]);
    }
    printf("\n");

    printf("\nDiagonal elements of Matrix 2:\n");
    for (int i = 0; i < rows2 && i < cols2; i++) {
        printf("%d ", matrix2[i][i]);
    }
    printf("\n");

    return 0;
}
