#include <stdio.h>

int main(){

int i,j,num1,num2,hcf,count=1;

printf("Enter two numbers: ");
scanf("%d %d",&num1,&num2);
for(i=1,j=1;i<num1,j<num2;i++,j++)
{
if(num1%i==0 && num2%j==0)
count=j;
else
continue;
}
printf("The HCF is %d\n",count);

return 0;
}

