//Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>

int main(){

float r,c,a;
printf("Enter the radius of circle: ");
scanf("%f",&r);
c=2*3.14*r;
a=3.14*r*r;
printf("The circumference and radius is %f and %f respectively\n",c,a);

return 0;
}

