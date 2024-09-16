//A program to create, initialize and use pointers
#include <stdio.h>
int main() {
    // Variable declarations
    int num = 10;
    float fnum = 20.5;
    char letter = 'A';
    
    // Pointer declarations
    int *intPtr;
    float *floatPtr;
    char *charPtr;
    
    // Initialize pointers
    intPtr = &num;
    floatPtr = &fnum;
    charPtr = &letter;
    
    // Print values using pointers
    printf("Value of num: %d\n", num);
    printf("Value of fnum: %.2f\n", fnum);
    printf("Value of letter: %c\n", letter);
    
    // Print values using pointers
    printf("Value of num using intPtr: %d\n", *intPtr);
    printf("Value of fnum using floatPtr: %.2f\n", *floatPtr);
    printf("Value of letter using charPtr: %c\n", *charPtr);
    
    // Modify values using pointers
    *intPtr = 25;
    *floatPtr = 30.75;
    *charPtr = 'Z';
    
    // Print modified values
    printf("\nAfter modification:\n");
    printf("Value of num: %d\n", num);
    printf("Value of fnum: %.2f\n", fnum);
    printf("Value of letter: %c\n", letter);
    
    // Print modified values using pointers
    printf("Value of num using intPtr: %d\n", *intPtr);
    printf("Value of fnum using floatPtr: %.2f\n", *floatPtr);
    printf("Value of letter using charPtr: %c\n", *charPtr);
    
    return 0;
}
