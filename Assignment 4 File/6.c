// Write a C program to delete a file.
#include <stdio.h>
 int main() {
 char filename[100];
 printf("Enter the filename to delete: ");
 scanf("%s", filename);
 if (remove(filename) == 0) {
 printf("File deleted successfully.\n");
 } else {
 printf("Could not delete the file %s\n", filename);
 }
 return 0;
 }
