//Write a program to convert a decimal number taken as input from a user to the corresponding binary number and store the result in an array. 
#include <stdio.h> 
int main() { 
    int n, i = 0, bin[32]; 
    printf("Enter a decimal number: "); 
    scanf("%d", &n); 
    while (n > 0) { 
        bin[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    printf("Binary representation: "); 
    for (int j = i - 1; j >= 0; j--) { 
        printf("%d", bin[j]); 
    } 
    return 0; 
}
