// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main(){

int prod=1,n;

printf("Enter the number of terms: ");
scanf("%d",&n);
for(int i=2;i<=n;i=i+2)
{
prod=prod*i;
}
printf("The product of %d even terms is: %d",n,prod);

return 0;
}


