//The sum of the digits of the number using a recursive function
#include<stdio.h>
int sumofdigits(int n )
{
  if(n==0)
{
return 0;
}
return (n%10)+sumofdigits(n/10);
}
int main()
{
  int number,result;
printf("Enter a number");
scanf("%d",&number);
if(number<0)
{
number=-number;
}
result=sumofdigits(number);
printf("The sum of the digits is %d\n",result);
return 0;
}
