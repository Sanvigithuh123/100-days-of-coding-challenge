//Write a program to input two numbers and display their sum, difference, product and quotient.


#include <stdio.h>

int main(){

int a,b;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
printf("The sum is:%d\n The difference is:%d\n The product is:%d\n The quotient is:%d\n",a+b,a-b,a*b,a%b);

return 0;
}

