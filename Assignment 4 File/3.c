//Write a C program to print the contents of a file.
 #include <stdio.h>
 int main() {
 FILE *file;
 char filename[100];
 char c;
 printf("Enter the filename: ");
 scanf("%s", filename);
 file = fopen(filename, "r");
 if (file == NULL) {
 printf("Could not open file %s\n", filename);
 return 1;
 }
 while ((c = fgetc(file)) != EOF) {
 putchar(c);
 }
 fclose(file);
 return 0;
 }
