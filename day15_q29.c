// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main(){

int fact=1,n;

printf("Enter the number of terms: ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
fact=fact*i;
}
printf("The factorial of %d is: %d",n,fact);

return 0;
}

