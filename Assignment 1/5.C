//Check a numbers an Armstrong number
#include<stdio.h>
int num,original number,rem,result=0,n=0;
printf("Enter an integer");
scanf("%d",&num);
original num=num;
while(original num!=0){
original num|=10;
++n;
}
original num==um;
while(original num ! =0){
rem=original num % 10;
result += pow(rem,n);
original num|=10;
}
if(result == num)
printf("%d is an armstrong number\n",num);
else
printf("%d is not an armstrong number\n",num);
return 0;
}
