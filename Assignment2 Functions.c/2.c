//To calculate the sum of the first 20 natural numbers using a recursive function
#include<stdio.h>
int sum(int n)
{
  if(n<=0)
{
return 0;
}
else
{
return n+sum(n-1);
}
int main()
{
  int n=20;
int result=sum(n);
printf("The sum of the first %d natural number is %d\n",n,result);
return 0;
}
