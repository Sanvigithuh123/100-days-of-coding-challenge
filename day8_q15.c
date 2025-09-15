// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {

char a;
printf("Enter a character: ");
scanf("%c",&a);

if(a>='a' && a<='z')
{
printf("It is an lowercase alphabet.\n");
}
else if(a>='A' && a<='Z')
{
printf("It is an uppercase alphabet.\n");
}
else if(a>='0' && a<='9')
{
printf("It is a digit.\n");
}
else
{
printf("It is a special character.\n");
}


return 0;
}
