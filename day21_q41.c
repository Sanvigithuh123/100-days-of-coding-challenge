// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main(){
int n,temp,first,last,power=1,middle,swapped;
printf("Enter a number: ");
scanf("%d",&n);
temp=n;
last=temp%10;
for(;temp>=10;temp/=10) power*=10;
first=temp;
middle=(n%power)/10;
swapped=last*power+middle*10+first;
printf("%d\n",swapped);

return 0;
}

