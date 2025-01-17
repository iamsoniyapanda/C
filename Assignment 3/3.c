// Write a program to insert an element in an array in a particular position. 
    #include<stdio.h>
    int main(){
    int n, i, pos, value; 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
    int arr[n + 1]; 
    printf("Enter %d elements:\n", n); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
    printf("Enter position and value to insert: "); 
    scanf("%d %d", &pos, &value); 
    for (i = n; i >= pos; i--) { 
        arr[i] = arr[i - 1]; 
    } 
    arr[pos - 1] = value; 
    n++; 
    printf("Array after insertion:\n"); 
    for (i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    return 0; 
}
