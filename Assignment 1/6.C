//Evaluate the algebric expression (ax+b)/(ax-b)
#include<stdio.h>
int main()
{
float a,b,x,result;
printf("Enter the value of a:");
scanf("%f",&a);

printf("Enter the value of b :");
scanf("%f",&b);

printf("Enter the value of x:");
scanf("%f",&x);

if((a*x-b)==0){
printf("Divison by zero is not allowed\n");
}else{
result=(a*x+b)/(a*x-b);
printf("The result of the expression
(%.2f*%.2f+%.2f)/(%.2f*%.2f-%2f) is %.2f\n",a,x,b,a,x,b,result);
}
return 0;
}
