//A number is pallindrome or not
#include<stdio.h>
void main()
{
  int n,c,s=0,r;
printf("enter any number");
scanf(%d",&n);
  c=n;
  while(n>0)
  {
r=n%10;
s=r+(s*10);
n=n/10;
}
if(c==s)
  printf("Pallindrome Number");
else
  printf("Number is not pallindrome");
}
  
