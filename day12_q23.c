/* Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/

#include <stdio.h>

int main(){

int x,c1,c2,c3;
printf("Enter the number of late days: ");
scanf("%d",&x);
c1=2*x;
c2=(5*2)+(4*(x-5));
c3=(5*2)+(4*5)+((x-10)*6);
if(x>0 && x<=5)
{
printf("Fine Rs.%d\n",c1);
}
else if(x>5 && x<=10)
{
printf("Fine Rs.%d\n",c2);
}
else if(x>10 && x<=30)
{
printf("Fine Rs.%d\n",c3);
}
else
{
printf("Membership Cancelled.\n");
}

return 0;
}
