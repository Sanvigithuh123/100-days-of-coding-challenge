// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main(){

int cp,sp,p,l,n,pp,lp;
printf("Enter cost price and selling price: ");
scanf("%d %d",&cp,&sp);
p=sp-cp;
l=cp-sp;
pp=(p*100)/cp;
lp=(l*100)/cp;
if(sp>cp)
{
printf("Profit %d %%\n",pp);
}
else if(sp<cp)
{
printf("Loss %d %%\n",lp);
}
else
{
printf("No profit no loss\n");
}

return 0;
}
