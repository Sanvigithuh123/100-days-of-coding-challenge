// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main (){
int num,bit,comp=0,base=1;;

printf("Enter a  binary number: ");
scanf("%d",&num);
for(int i=1;i<=4;i++)
{
bit=num%10;
if(bit==1)
bit=0;
else
bit=1;
comp=comp+bit*base;
base=base*10;
num=num/10;
}
printf("%d\n",comp);

return 0;
}
