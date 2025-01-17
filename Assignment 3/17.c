//Write a program to check whether a matrix is a sparse matrix or not. 
#include <stdio.h> 
int main() { 
    int r, c, i, j, countZero = 0; 
    printf("Enter the number of rows and columns: "); 
    scanf("%d %d", &r, &c); 
    int mat[r][c]; 
    printf("Enter the elements of the matrix:\n"); 
    for (i = 0; i < r; i++) { 
        for (j = 0; j < c; j++) { 
            scanf("%d", &mat[i][j]); 
            if (mat[i][j] == 0) { 
                countZero++; 
            } 
        } 
    } 
    if (countZero > (r * c) / 2) { 
        printf("The matrix is a sparse matrix.\n"); 
    } else { 
        printf("The matrix is not a sparse matrix.\n"); 
    } 
    return 0; 
} 
 
