//Write a program to input a binary number in an array and convert it into a corresponding decimal number. 
#include <stdio.h> 
int main() { 
    int n, dec = 0, base = 1; 
    printf("Enter the number of binary digits: "); 
    scanf("%d", &n); 
    int bin[n]; 
    printf("Enter the binary number:\n"); 
    for (int i = 0; i < n; i++) { 
        scanf("%d", &bin[i]); 
    } 
    for (int i = n - 1; i >= 0; i--) { 
        dec += bin[i] * base; 
        base = base * 2; 
    } 
    printf("Decimal equivalent: %d\n", dec); 
    return 0; 
}
