// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main(){

int a,b,c;
printf("Input three numbers: ");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
printf("%d is greatest.\n",a);
}
else if(b>a && b>c)
{
printf("%d is greatest.\n",b);
}
else if(c>a && c>b)
{
printf("%d is greatest.\n",c);
}

return 0;
}
