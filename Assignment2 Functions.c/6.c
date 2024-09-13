//To read an integer numbers and print the reverse of that numbers using recusion
#include<stdio.h>
void reversenumber(int num)
{
  if(num<10)
{
printf("%d",num );
return ;
}
printf("%d",num%10);
reversenumber(num/10);
}
int main()
{
  int number;
printf("Enter an integer number:");
scanf("%d",&number);
if(number<0)
{
printf("-");
number=-number;
}
reversenumber(number);
printf("\n");
return 0;
}
