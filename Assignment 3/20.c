 //Write a C program to read the RollNo, Name, Address, and Age marks of 12 students in the BCT class and display the details from the function. 
#include <stdio.h> 
struct Student { 
    int RollNo; 
    char Name[50]; 
    char Address[100]; 
    int Age; 
    float Marks; 
}; 
 
void displayStudentDetails(struct Student students[], int count) { 
    printf("\nDisplaying Student Details:\n"); 
    for (int i = 0; i < count; i++) { 
        printf("\nStudent %d Details:\n", i + 1); 
        printf("Roll Number: %d\n", students[i].RollNo); 
        printf("Name: %s\n", students[i].Name); 
        printf("Address: %s\n", students[i].Address); 
        printf("Age: %d\n", students[i].Age); 
        printf("Marks: %.2f\n", students[i].Marks); 
    } 
} 
 
int main() {
    struct Student students[12]; 
    int i; 
 
    printf("Enter details for 12 students in the MCA class:\n"); 
 
    for (i = 0; i < 12; i++) { 
        printf("\nEnter details for student %d:\n", i + 1); 
 
        printf("Roll Number: "); 
        scanf("%d", &students[i].RollNo); 
 
        printf("Name: "); 
        scanf("%s", students[i].Name); 
 
        printf("Address: "); 
        scanf("%s", students[i].Address); 
        printf("Age: "); 
        scanf("%d", &students[i].Age); 
        printf("Marks: "); 
        scanf("%f", &students[i].Marks); 
    } 
    displayStudentDetails(students, 12); 
 
    return 0; 
}
