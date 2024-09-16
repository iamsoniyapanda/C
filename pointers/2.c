//A program to add two numbers using pointers
#include <stdio.h>
void addNumbers(int *a, int *b, int *result);

int main() {
    // Variable declarations
    int num1, num2, sum;
    
    // Input numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Call function to add numbers using pointers
    addNumbers(&num1, &num2, &sum);
    
    // Print the result
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);
    
    return 0;
}

// Function to add two numbers using pointers
void addNumbers(int *a, int *b, int *result) {
    *result = *a + *b;
}
