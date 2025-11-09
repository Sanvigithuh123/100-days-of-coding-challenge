#include <stdio.h>

int main() {

int x,temp,num,prod=1;

printf("Enter a number: ");
scanf("%d",&num);
for(temp=num;temp!=0;temp/=10)
{
x=temp%10;
if(x%2==0)
continue;
else
prod=prod*x;
}
printf("The product of odd digits of %d is %d\n",num,prod);

return 0;
}
