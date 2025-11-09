#include <stdio.h>

int main() {

int temp,num,sum=0,x;

printf("Enter a number: ");
scanf("%d",&num);
for(temp=num;temp!=0;temp/=10)
{
x=temp%10;
sum=sum+x;
}
printf("The sum of the digits of %d is %d\n",num,sum);

return 0;
}
