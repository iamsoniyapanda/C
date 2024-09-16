//A program to search an element in array using pointers
#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5; // Element to search for
    int *ptr = arr;

    // Search for the element using pointers
    while (ptr < arr + SIZE) {
        if (*ptr == target) {
            printf("Element %d found at index %ld.", target, ptr - arr);
            break;
        }
        ptr++;
    }

    // Handle element not found
    if (ptr == arr + SIZE) {
        printf("Element %d not found in the array.", target);
    }

    return 0;
}
