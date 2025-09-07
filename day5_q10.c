// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main(){

int sec,min,hr;

printf("Input time in seconds: ");
scanf("%d",&sec);
hr=sec/3600;
min=(sec%3600)/60;
sec=sec%60;
printf("The time is %d:%d:%d\n",hr, min, sec);

return 0;
}

