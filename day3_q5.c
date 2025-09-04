//Write a program to convert temperature from celsius to fahrenheit.


#include <stdio.h>

int main(){

float t;
printf("Enter temperature in Celsius: ");
scanf("%f",&t);
printf("The temperature in Fahrenheit:%f",t*1.8+32);

return 0;
}
