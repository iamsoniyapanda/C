//Generate prime numbers between 1 to n
#include<stdio.h>
int main() 
{
  int num,i,count,n;
printf("Enter max range:");
scanf("%d",&n);
for(num=1;num<=n;num++)
{
if(num%i==0)
{
count++;
break;
}
}
if(count==0 && num!=1)
  printf("%d",num);
}
return 0;
}
