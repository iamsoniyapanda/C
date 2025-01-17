//Write a C program to count the number of lines in a file.
 #include <stdio.h>
 int main() {
 FILE *file;
 char filename[100];
 int count = 0;
 char c;
 printf("Enter the filename: ");
 scanf("%s", filename);
 file = fopen(filename, "r");
 if (file == NULL) {
 printf("Could not open file %s\n", filename);
 return 1;
 }
 while ((c = fgetc(file)) != EOF) {
 if (c == '\n') {
 count++;
 }
 }
 printf("The file has %d lines\n", count);
 fclose(file);
 return 0;
 }
