// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main(){

int t1,t2,t3;
printf("Enter 3 sides of a triangle: ");
scanf("%d %d %d",&t1,&t2,&t3);
if(t1+t2>t3 && t2+t3>t1 && t3+t1>t2)
{
  if(t1==t2 && t2==t3) 
  {
  printf("The triangle is equilateral.\n");
  }
  else if(t1==t2 || t2==t3 || t3==t1)
  {
  printf("The triangle is isoceles.\n");
  }
  else 
  {
  printf("The triangle is scalene.\n");
  }
}
else
{
printf("The triangle is invalid.\n");
}

return 0;
}
