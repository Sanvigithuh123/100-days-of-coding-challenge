/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include <stdio.h>

int main(){

int x;

printf("Enter the units consumed: ");
scanf("%d",&x);
if(x==100 || x<100)
printf("The electricity bill is: %d\n",5*x);
else if(x>100 && x<=200)
printf("The electricity bill is: %d\n",((100*5)+(x-100)*7));
else if(x>200 && x<=300)
printf("The electricity bill is: %d\n",(1200+(x-200)*10));
else
printf("The electricity bill is: %d\n",(2200+(x-300)*12));

return 0;
}
