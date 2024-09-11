//A number is divisible by 5 and 11 or not within the range of 100 to 500
#include<stdio.h>
int main()
{
  int  mum;
printf("Enter a number between 100 & 500");
scanf("%d",&num);
if(num<100||num>500)
{
printf("The number is out of range please enter a number between 100 & 500\n");
}
else{
if(num%5==0&& num %11==0){
  printf("%d is divisible by both 5 and 11 \n",num);
}else{
printf("%d is not divisible by both 5 and 11.\n",num);
}
}
return 0;
}
