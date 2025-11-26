// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
int n, i, num = 1, den = 2;
float sum = 0;

printf("Enter the number of terms: ");
scanf("%d", &n);

for(i = 1; i <= n; i++) {
sum += (float)num / den;
num += 2;
den += 2;
}

printf("Approximate sum: %.1f", sum);

return 0;
}

