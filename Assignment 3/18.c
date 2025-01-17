//Write a C program to create a structure named company which has name, address, phone and no Of Employee as member variables. Read the name of the company, its address, phone and no Of Employee. Finally display these members‟ values. 
#include <stdio.h> 
#include <string.h> 
 
struct Company { 
    char name[50]; 
    char address[100]; 
    char phone[15]; 
    int noOfEmployees; 
}; 
 
int main() {  
    struct Company c; 
 
    printf("Enter the company name: "); 
    scanf("%s", c.name); 
    printf("Enter the company address: "); 
    scanf("%s", c.address); 
    printf("Enter the company phone number: "); 
    scanf("%s", c.phone); 
    printf("Enter the number of employees: "); 
    scanf("%d", &c.noOfEmployees); 
 
    printf("\nCompany Details:\n"); 
    printf("Name: %s\n", c.name); 
    printf("Address: %s\n", c.address); 
    printf("Phone: %s\n", c.phone); 
    printf("Number of Employees: %d\n", c.noOfEmployees); 
 
    return 0; 
}
