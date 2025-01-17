 //Write a program that stores the marks of the subject Mathematics and English of n number of students in an array and then prints their total marks. 
#include <stdio.h> 
int main() { 
    int n, i; 
    printf("Enter the number of students: "); 
    scanf("%d", &n); 
    int math[n], english[n], total[n]; 
    for (i = 0; i < n; i++) { 
        printf("Enter marks for student %d (Math and English): ", i + 1); 
        scanf("%d %d", &math[i], &english[i]); 
        total[i] = math[i] + english[i]; 
    } 
    printf("\nTotal marks of the students:\n"); 
    for (i = 0; i < n; i++) { 
        printf("Student %d: %d\n", i + 1, total[i]); 
    } 
    return 0; 
}
