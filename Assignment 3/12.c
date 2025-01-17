// Write a program to perform addition and subtraction between two matrices. 
#include <stdio.h> 
int main() {
    int r, c, i, j; 
    printf("Enter the number of rows and columns: "); 
    scanf("%d %d", &r, &c); 
 
    int mat1[r][c], mat2[r][c], sum[r][c], diff[r][c]; 
     
    printf("Enter elements of first matrix:\n"); 
    for (i = 0; i < r; i++) { 
        for (j = 0; j < c; j++) { 
            scanf("%d", &mat1[i][j]); 
        } 
    } 
    printf("Enter elements of second matrix:\n"); 
    for (i = 0; i < r; i++) { 
        for (j = 0; j < c; j++) { 
            scanf("%d", &mat2[i][j]); 
        } 
    } 
    for (i = 0; i < r; i++) { 
        for (j = 0; j < c; j++) { 
            sum[i][j] = mat1[i][j] + mat2[i][j]; 
        } 
    } 
    for (i = 0; i < r; i++) { 
        for (j = 0; j < c; j++) { 
            diff[i][j] = mat1[i][j] - mat2[i][j]; 
        } 
    } 
    printf("Matrix Addition:\n"); 
    for (i = 0; i < r; i++) { 
        for (j = 0; j < c; j++) { 
            printf("%d ", sum[i][j]); 
        } 
        printf("\n"); 
    } 
    printf("Matrix Subtraction:\n"); 
    for (i = 0; i < r; i++) { 
        for (j = 0; j < c; j++) { 
            printf("%d ", diff[i][j]); 
        } 
        printf("\n"); 
    } 
    return 0; 
} 
