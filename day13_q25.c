//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main(){

int x,y;
char a;

printf("Enter two numbers and the operation to perform: ");
scanf("%d %d %c",&x,&y,&a);

switch(a)
{
case '+':
printf("The sum is %d\n",x+y);
break;
case '-':
printf("The difference is %d\n",x-y);
break;
case '*':
printf("The product is %d\n",x*y);
case '/':
if(y!=0)
printf("The quotient is %d\n",x/y);
else
printf("Error\n");
break;
case '%':
if(y!=0)
printf("The quotient is %d\n",x%y);
else
printf("Error\n");
break;
default:
printf("Invalid Operator.\n");
}

return 0;
}
