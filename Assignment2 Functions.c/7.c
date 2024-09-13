//Maximum and minimum between two numbers
#include<stdio.h>
int findmaximum(int a,int b)
{
  return(a<b)?a:b;
}
int findminimu(int a,int b)
{
  return (a<b)?a:b;
}
int main()
{
  int num1,num2;
printf("Enter the first number:");
scanf("%d",&num1);
printf("Enter the second number:");
scanf("%d",&num2);
int max=findmaximum(num1,num2);
int min=findminimum(num1,num2);
printf("The maximum of %d & %d is:%d\n",num1,num2,max);
printf("The minimum of %d & %d is:%d\n",num1,num2,min);
return 0;
}
