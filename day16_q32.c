// Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main(){

int num,rev=0,temp;

printf("Enter a number: ");
scanf("%d",&num);
for(temp=num;temp>0;temp=temp/10)
{
rev = rev*10 + temp%10;
}
if(rev==num)
printf("Palindrome\n");
else
printf("Not palindrome\n");

return 0;
}


