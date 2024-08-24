//A number is perfect or not
#include<stdio.h>
int main()
{
int num,sum=0,i;
printf("Enter a positive number");
scanf("%d",&num);
if(num<0)
{
printf(The num must be a positive integer:);
return 1;
}
for(i=1;i<=num/2;i++)
{
if(num%i==0){
sum+=i;
}
}
if(sum==num){
printf("%d is aperfect num \n",num);
}
else{
printf("%d is not a perfect num \n",num);
}
return 0;
}
