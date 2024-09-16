//A program to swap two arrays using pointers
#include <stdio.h>

#define SIZE 5 
void inputArray(int *arr, int size);
void printArray(const int *arr, int size);
void swapArrays(int *arr1, int *arr2, int size);

int main() {
    int array1[SIZE];  // First array
    int array2[SIZE];  // Second array

    // Input elements into the first array
    printf("Enter %d elements for the first array:\n", SIZE);
    inputArray(array1, SIZE);

    // Input elements into the second array
    printf("Enter %d elements for the second array:\n", SIZE);
    inputArray(array2, SIZE);

    // Print both arrays before swapping
    printf("\nBefore swapping:\n");
    printf("First array:\n");
    printArray(array1, SIZE);

    printf("Second array:\n");
    printArray(array2, SIZE);

    // Swap the contents of the two arrays
    swapArrays(array1, array2, SIZE);

    // Print both arrays after swapping
    printf("\nAfter swapping:\n");
    printf("First array:\n");
    printArray(array1, SIZE);

    printf("Second array:\n");
    printArray(array2, SIZE);

    return 0;
}

// Function to input array elements using pointers
void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", (arr + i));  // Read value into the memory address arr + i
    }
}

// Function to print array elements using pointers
void printArray(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  // Dereference the pointer to access elements
    }
    printf("\n");
}

// Function to swap the contents of two arrays using pointers
void swapArrays(int *arr1, int *arr2, int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = *(arr1 + i);   // Store the value from arr1
        *(arr1 + i) = *(arr2 + i); // Copy the value from arr2 to arr1
        *(arr2 + i) = temp;  // Copy the stored value to arr2
    }
}
