//Print fibonacci sequence
#include<stdio.h>
int main()
{
printf("Enter the number of terms for the fibonacci sequencs:");
scanf("%d",&n);
if(n<=0)
{
printf("enter a positive integers\n");
return 1;
}
int a=0,b=1,c;
for(i=0;i<n;i++)
{
if(i==0){
printf("%d",a);
}
else if(i==1){
printf("%d",b);
}
else{
c=a+b;
printf("%d",c);
a=b;
a=c;
}
}
printf("\n');
return 0;
}
