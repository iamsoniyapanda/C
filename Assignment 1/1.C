//Print sum and average of three numbers
#include<stdio.h>
float num1,num2,num3;
float sum,average;
printf("Enter the first number");
scanf("%d",&num1);
printf("enter the second number");
scanf("%d",&num2);
printf("enter the third number");
scanf("%d",&num3);
sum=num1+num2+num3;
average=sum/3;
printf("sum of the numbers:%.2f\n",sum);
printf("Average of the numbers:%2f\n",average);
return 0;
}
