//A program to copy one array to another using pointers
#include <stdio.h>

#define SIZE 5  // Define the size of the arrays
void copyArray(const int *source, int *destination, int size);
void printArray(const int *arr, int size);

int main() {
    int sourceArray[SIZE];      // Source array
    int destinationArray[SIZE]; // Destination array

    // Input elements into the source array
    printf("Enter %d elements for the source array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &sourceArray[i]);
    }
    copyArray(sourceArray, destinationArray, SIZE);

    printf("Source array elements:\n");
    printArray(sourceArray, SIZE);

    printf("Destination array elements after copying:\n");
    printArray(destinationArray, SIZE);

    return 0;
}

// Function to copy one array to another using pointers
void copyArray(const int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i); // Copying each element
    }
}

// Function to print array elements using pointers
void printArray(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  // Dereference the pointer to access elements
    }
    printf("\n");
}

