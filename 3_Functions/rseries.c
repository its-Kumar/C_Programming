#include <stdio.h>
int rseries(int);
int main()
{
  int n;
  printf("Enter the number of terms:\n");
  scanf("%d", &n);

  printf("\b\b =%d\n\n\n", rseries(n));
}
int rseries(int n)
{
  int sum;
  if (n == 0)
    return 0;
  sum = (n + rseries(n - 1));
  printf("%d + ", n);
  return sum;
}
