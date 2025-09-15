// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main(){

int a,b,c,y1,y2,d;
printf("Enter the coefficients of a quadratic equation: ");
scanf("%d %d %d",&a,&b,&c);
y1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
y2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
d=(b*b)-(4*a*c);
if(d>0)
{
printf("The roots are real and different and the roots are:%d %d.\n",y1,y2);
}
else if(d==0)
{
printf("The roots are real and same and the root is:%d.\n",y1);
}
else if(d<0)
{
printf("The roots are complex.\n");
}

return 0;
}

