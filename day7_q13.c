// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main (){

int yr;
printf("Enter a year: ");
scanf("%d",&yr);
if((yr%4==0 || yr%400==0) && yr%100!=0)
{
printf("The year is a leap year.\n");
}
else
{
printf("The year is not a leap year.\n");
}

return 0;
}
