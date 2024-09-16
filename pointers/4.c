//A program to input and print array elements using pointer
#include <stdio.h>
#define SIZE 5  
void inputArray(int *arr, int size);
void printArray(int *arr, int size);

int main() {
    int array[SIZE]; 

    // Input array elements
    printf("Enter %d elements for the array:\n", SIZE);
    inputArray(array, SIZE);

    // Print array elements
    printf("The elements of the array are:\n");
    printArray(array, SIZE);

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
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  // Dereference the pointer to get the value
    }
    printf("\n");
}
