#include <stdio.h>

int main(){

int i,j,num1,num2,hcf=1,lcm;

printf("Enter two numbers: ");
scanf("%d %d",&num1,&num2);
if(num1>num2)
{
int temp=num1;
num1=num2;
num2=temp;
}
for(i=1,j=1;i<num1,j<num2;i++,j++)
{
if(num1%i==0 && num2%j==0)
hcf=j;
}
lcm=(num1*num2)/hcf;
printf("The LCM is %d\n",lcm);

return 0;
}

