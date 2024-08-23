//Number is perfect or not
#include<stdio.h>
int main(){
int num,sum=0,i;
printf("enter a positive integer:");
scanf("%d",&num);
if(num<=0){
printf("The number must be a positive integer\n");
return 1;
}
for(i=1;i<num/2;i++)
{
if(num%i==0){
sum+=i;
}
}
if(sum==num){
printf("%d is a perfect number\n",num);
}
else{
printf("%d is not a perfect number\n",num);
}
retur 0;
}
