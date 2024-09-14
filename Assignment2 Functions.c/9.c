//A number is a prime ,armstrong or pefect number using functions
#include<stdio.h>
#include<math.h>
int isprime(int num);
int isarmstrong(int num);
int main()
{
  int num,sqrt;
float pow;
printf("Enter a number:");
scanf("%d",&num);
if(num<=0)
{
printf("Please enter a positive integer\n" );
return 1;
}
printf("%d is a prime number:\n",num);
}
else
{
printf("%d is not a prime number\n",num);
}
if(isarmsstrong(num))
{
printf("%d is an amstrong number\n",num);
}
else
  printf("%d is not an armstrong number\n",num);
}
if(isperfect(num))
{
printf("%d is a perfect number\n",num);
}
else
{
printf("%d is a perfect number\n",num);
}
else
{
printf("%d is not a perfect number\n",num);
}
return 0;
isprime(int num)
if(num<=1)
return 0;
if(num==2)return 1;
if(num%2==0)return 0;
for(int i=3;i<=sqrt(num),i+=2)
{
if(num%i==0)return 0;
}
return 1;
int armstrong(int num)
{
  int sum=0,original num=num,digitcount=0;
while(num!=0)
{
num/=10;
digitcount++;
}
num/=10;
digitcount++;
}
num=original num;
while(num!=0)
{
int digit=num%10;
sum+=pow(digit,digitcount);
num/=10;
}
return (sum==originalnum);
}
int isperfect (int num)
{
  int sum=0;
for(int i=1;i<num/2;i++)
{
if(num%i==0)
{
sum+=i;
}
}
return (sum==num);
}
