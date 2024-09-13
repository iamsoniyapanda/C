//Check wheather it is an alphabet ,digit or special character
#include<stdio.h>
int main()
{
  char ch;
printf("enter any character");
scanf("%c",&ch);
if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
{
printf("'%c'is digit",ch);
}
else
{
printf("'%c' is special character",ch);
}
}
