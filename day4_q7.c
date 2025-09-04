//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main(){

int a,b,c;

printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;

printf("Swapping the two numbers:%d %d\n",a, b);

return 0;
}

