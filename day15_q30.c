// Q30: Write a program to reverse a given number.

#include <stdio.h>

int main(){

int num,rev=0,temp;

printf("Enter a number: ");
scanf("%d",&num);
for(temp=num;temp>0;temp=temp/10)
{
rev = rev*10 + temp%10;
}
printf("The reverse is: %d\n",rev);

return 0;
}
