//SWap two integers using call-by-value & call-by-refrence methods of passsing arguments to a function
#include<stdio.h>
void swapbyvalue(int a,int b)
{
  int temp;
temp=a;
a=b;
b=temp;
printf("After swapping (call-by-value)\n");
printf("a=%d;b=%d\n",a,b);
}
void swapbyrefrence(int*a,int *b)
{
  int temp;
temp=*a;
*a=*b;
*b=temp;ca
}
int main(){
  int x=5,y=10;
printf("Before swapping:\n");
swap by value (x,y);
swap by refrence(&x,&y);
printf("After swapping (call-by-refrence)\n");
printf("x=%d,y=%d\n",x,y);
return 0;
}
