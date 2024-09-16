//A program to access two dimensional array using pointers
#include <stdio.h>

#define ROWS 3
#define COLS 4

void inputArray(int (*arr)[COLS], int rows);
void printArray(int (*arr)[COLS], int rows);

int main() {
    int array[ROWS][COLS];  // Declare a 2D array

    // Input elements into the 2D array
    printf("Enter elements for a %dx%d array:\n", ROWS, COLS);
    inputArray(array, ROWS);

    // Print the 2D array
    printf("The 2D array is:\n");
    printArray(array, ROWS);

    return 0;
}

// Function to input elements into a 2D array using pointers
void inputArray(int (*arr)[COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (*(arr + i) + j));  // Use pointer arithmetic to input values
        }
    }
}

// Function to print elements of a 2D array using pointers
void printArray(int (*arr)[COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", *(*(arr + i) + j));  // Use pointer arithmetic to access elements
        }
        printf("\n");
    }
}
