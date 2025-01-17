// Write a program to check whether a matrix is an identity matrix or not. 
#include <stdio.h> 
int main() {  
    int n, i, j, isIdentity = 1; 
    printf("Enter the size of the matrix (n x n): "); 
    scanf("%d", &n); 
 
    int mat[n][n]; 
    printf("Enter the elements of the matrix:\n"); 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < n; j++) { 
            scanf("%d", &mat[i][j]); 
        } 
    } 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < n; j++) { 
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) { 
                isIdentity = 0; 
                break; 
            } 
        } 
    } 
    if (isIdentity) { 
        printf("The matrix is an identity matrix.\n"); 
    } else { 
        printf("The matrix is not an identity matrix.\n"); 
    } 
    return 0; 
}
