// A program to add two matrix and multiply two matrix using pointers
#include <stdio.h>

#define ROWS 3
#define COLS 3
void inputMatrix(int *matrix, int rows, int cols);
void printMatrix(const int *matrix, int rows, int cols);
void addMatrices(const int *matrix1, const int *matrix2, int *result, int rows, int cols);
void multiplyMatrices(const int *matrix1, const int *matrix2, int *result, int rows, int cols);

int main() {
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int resultAdd[ROWS][COLS];
    int resultMul[ROWS][COLS];

    // Input matrices
    printf("Enter elements for the first %dx%d matrix:\n", ROWS, COLS);
    inputMatrix(&matrix1[0][0], ROWS, COLS);

    printf("Enter elements for the second %dx%d matrix:\n", ROWS, COLS);
    inputMatrix(&matrix2[0][0], ROWS, COLS);

    // Perform matrix addition
    addMatrices(&matrix1[0][0], &matrix2[0][0], &resultAdd[0][0], ROWS, COLS);

    // Perform matrix multiplication
    multiplyMatrices(&matrix1[0][0], &matrix2[0][0], &resultMul[0][0], ROWS, COLS);

    // Print results
    printf("\nMatrix 1:\n");
    printMatrix(&matrix1[0][0], ROWS, COLS);

    printf("\nMatrix 2:\n");
    printMatrix(&matrix2[0][0], ROWS, COLS);

    printf("\nResult of Matrix Addition:\n");
    printMatrix(&resultAdd[0][0], ROWS, COLS);

    printf("\nResult of Matrix Multiplication:\n");
    printMatrix(&resultMul[0][0], ROWS, COLS);

    return 0;
}

// Function to input elements into a matrix using pointers
void inputMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (matrix + i * cols + j));  // Pointer arithmetic to access elements
        }
    }
}

// Function to print elements of a matrix using pointers
void printMatrix(const int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));  // Pointer arithmetic to access elements
        }
        printf("\n");
    }
}

// Function to add two matrices using pointers
void addMatrices(const int *matrix1, const int *matrix2, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(matrix1 + i * cols + j) + *(matrix2 + i * cols + j);
        }
    }
}

// Function to multiply two matrices using pointers
void multiplyMatrices(const int *matrix1, const int *matrix2, int *result, int rows, int cols) {
    // Initialize result matrix with zero
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = 0;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < cols; k++) {
                *(result + i * cols + j) += *(matrix1 + i * cols + k) * *(matrix2 + k * cols + j);
            }
        }
    }
}
