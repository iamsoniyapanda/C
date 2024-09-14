//the power of any number using recursion
#include<stdio.h>
int power(int base,int exponent);
int main(){
  int base,exponent;
printf("Enter the base:");
scanf("%d",&base);
if(exponent<0)
{
printf("Exponent should be a non negative integer \n");
return 1;
}
int result=power(base,exponent);
printf("%d %d =%d\n",base,exponent,result);
return 0;
}
int power(int base,int exponent)
{
  if(exponent==0)
{
return 1;
}
return base*power(base,exponent-1);
}
