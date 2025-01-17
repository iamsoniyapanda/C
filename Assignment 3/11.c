// Write a program to find second second-highest number from the array without using sorting. 
#include <stdio.h> 
int main() { 
    int n, i, max, secondMax; 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
    int arr[n]; 
    printf("Enter the elements: "); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
 
    if (n < 2) { 
        printf("Not enough elements\n"); 
        return 0; 
    } 
    max = secondMax = -2147483648; // Initialize to smallest possible integer 
    for (i = 0; i < n; i++) { 
        if (arr[i] > max) { 
            secondMax = max; 
            max = arr[i]; 
        } else if (arr[i] > secondMax && arr[i] != max) { 
            secondMax = arr[i]; 
        } 
    } 
    if (secondMax == -2147483648) { 
        printf("No second highest element\n"); 
    } else { 
        printf("Second highest element is %d\n", secondMax); 
    } 
    return 0; 
} 
