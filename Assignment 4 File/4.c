//Write a C program to copy the contents of one file to another file.
 #include <stdio.h>
 int main() {
 FILE *srcFile, *destFile;
 char srcFilename[100], destFilename[100];
 char c;
 printf("Enter the source filename: ");
 scanf("%s", srcFilename);
 printf("Enter the destination filename: ");
 scanf("%s", destFilename);
 srcFile = fopen(srcFilename, "r");
 if (srcFile == NULL) {
 printf("Could not open source file %s\n", srcFilename);
 return 1;
 }
 destFile = fopen(destFilename, "w");
 if (destFile == NULL) {
 printf("Could not open destination file %s\n", destFilename);
 return 1;
 }
 while ((c = fgetc(srcFile)) != EOF) {
 fputc(c, destFile);
 }
 printf("File copied successfully.\n");
 fclose(srcFile);
 fclose(destFile);
 return 0;
 }
