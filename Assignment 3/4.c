//Write a program to delete an element from a particular position of an array. 
#include <stdio.h> 
int main() {  
    int n, i, pos; 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
    int arr[n]; 
    printf("Enter %d elements:\n", n); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
    printf("Enter position to delete: "); 
    scanf("%d", &pos); 
    for (i = pos - 1; i < n - 1; i++) { 
        arr[i] = arr[i + 1]; 
    } 
    n--; 
    printf("Array after deletion:\n"); 
    for (i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    return 0; 
}
