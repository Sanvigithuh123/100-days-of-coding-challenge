// Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main(){

int i,num,count=0;

printf("Enter a number: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
count++;
}
if(count==2)
printf("Prime\n");
else
printf("Not prime\n");

return 0;
}
