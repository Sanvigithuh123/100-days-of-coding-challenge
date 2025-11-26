// Write a program to check if a number is a strong number.

#include <stdio.h>

int main(){

int n,temp,d,fact,sum=0,i;

printf("Enter a number: ");
scanf("%d",&n);

for(temp=n;temp>0;temp/=10){
d=temp%10;
fact=1;
for(i=1;i<=d;i++) {
fact*=i;
}
sum+=fact;
}

if(sum==n) 
printf("Strong number\n");
else 
printf("Not strong number\n");

return 0;
}

