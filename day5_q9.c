//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main(){

float p,r,t,SI,CI;
printf("Enter principal, rate and time: ");
scanf("%f %f %f",&p,&r,&t);

SI=(p*r*t)/100;
CI=(p*(pow((1+r/100), t))-p);
printf("Simple interest:%.2f Compound interest:%.2f ",SI,CI);

return 0;
}
