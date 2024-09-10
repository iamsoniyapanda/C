//Program to convert temperature in celsius to Fahrenheit and vice versa

#include <stdio.h>

int main() {
int choice;
float temp, converted temp;
printf("Temp conversion Menu:\n");
printf("1.Celsius to Fahrenheit\n");
printf("2.Fahrenheit to celsius\n");
printf("Enter your choice (1 to 2)");  
scanf("%d",&choice);
switch (choice){
Case 1;
printf("Enter temp in celsius :");
scanf("%f",&temp);
converted temp=(temp*9/5)+32;
printf("%2f celsius is equal to % .2f Fahrenheit\n",temp,converted temp);
break;
Case 2:
Printf("Enter temp in Fahrenheit:");
scanf("%f",&temp);
converted temp=(temp-32)*5/9;
printf("%2f Fahreheit is equal to %. 2f celsius\n",temp,converted temp);
break;
default;
printf("Invalid choice please select 1 or 2\n");
break;
}
return 0;
}
