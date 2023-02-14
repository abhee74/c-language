// wap in c to find the sum of the series 1!/1+2!/2+3! using the function...
#include <stdio.h>

int main()
{
  int n, sum = 0;

  printf("Enter value of n: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++)
  {
    sum += i;
  }

  printf("Sum of first %d natural numbers is: %d", n, sum);

  return 0;
}