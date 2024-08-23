//Print the sum of indiviual digits of a given positive integers
#include<stdio.h>
int main()
{
int number,sum=0;
printf("Enter a positive integers");
scanf("%d",&number);
if(number<0)
{
printf("enter a positive integer\n");
return 1;
}
while(number>0)
{
int digit=number%10;
sum+=digit;
number/=10;
}
printf("sum of the digits: %d\n",sum);
return 0;
}
