//Write a C program to merge the contents of two files into a third file.
 #include <stdio.h>
 int main() {
 FILE *file1, *file2, *mergeFile;
 char file1Name[100], file2Name[100], mergeFileName[100];
 char c;
 printf("Enter the first filename: ");
 scanf("%s", file1Name);
 printf("Enter the second filename: ");
 scanf("%s", file2Name);
 printf("Enter the filename to merge into: ");
 scanf("%s", mergeFileName);
 file1 = fopen(file1Name, "r");
 file2 = fopen(file2Name, "r");
 mergeFile = fopen(mergeFileName, "w");
 if (file1 == NULL || file2 == NULL || mergeFile == NULL) {
 printf("Error opening one of the files.\n");
 return 1;
 }
 while ((c = fgetc(file1)) != EOF) {
 fputc(c, mergeFile);
 }
 while ((c = fgetc(file2)) != EOF) {
 fputc(c, mergeFile);
 }
 printf("Files merged successfully.\n");
 fclose(file1);
 fclose(file2);
 fclose(mergeFile);
 return 0;
 }
