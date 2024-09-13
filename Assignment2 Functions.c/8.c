//A number is even or odd using functions
#include<stdio.h>
int iseven(int num)
{
  return (num % 2==0);
}
int isodd(int num)
{
  return (num%2!=0);
}
int  main()
{
  int number;
printf("Enter an integer number:");
scanf("%d",&number);
if(iseven(number))
{
printf("%d is even \n",number);
}
else if(isodd(number));
{
printf("%d is odd\n",number);
}
return 0;
}
