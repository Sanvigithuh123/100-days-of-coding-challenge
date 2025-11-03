//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main(){

int n,sum=0;
printf("Enter the number of terms: ");
scanf("%d",&n);
for(int i=1;i<=n+1;i+=2)
{
sum=sum+i;
}
printf("The sum of odd numbers:%d\n",sum);

return 0;
}
