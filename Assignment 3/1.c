//Write a program to store marks for n number of student in an array and print their marks. 
#include <stdio.h> 
int main() { 
    int n, i; 
    printf("Enter the number of students: "); 
    scanf("%d", &n); 
    int marks[n]; 
    printf("Enter the marks of %d students:\n", n); 
    for (i = 0; i < n; i++) { 
        printf("Marks for student %d: ", i + 1); 
        scanf("%d", &marks[i]); 
    } 
    printf("\nThe marks of the students are:\n"); 
    for (i = 0; i < n; i++) { 
        printf("Student %d: %d\n", i + 1, marks[i]); 
     } 
return 0; 
}
