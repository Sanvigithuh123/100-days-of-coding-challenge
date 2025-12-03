// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {

int i,n;

printf("Enter the size of array: ");
scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++)
{
printf("Enter %d index element: ",i);
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++)
{
printf("%d \n",arr[i]);
}

return 0;
}
