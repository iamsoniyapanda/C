//A program to swap two numbers using pointers
#include <stdio.h>
void swap(int *a, int *b);

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Print the numbers before swapping
    printf("Before swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
    // Call function to swap numbers using pointers
    swap(&num1, &num2);
    
    // Print the numbers after swapping
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
    return 0;
}

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a; // Store the value at address a in temp
    *a = *b;   // Copy the value at address b to address a
    *b = temp; // Copy the value stored in temp to address b
}
