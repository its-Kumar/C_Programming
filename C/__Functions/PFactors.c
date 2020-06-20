#include <stdio.h>
void PFactor(int num)
{
  int i = 2;
  if (num == 1)
    return;
  if (num % i != 0)
    i++;
  printf("%d\t", i);
  PFactor(num / i);
}
void main()
{
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  printf("Prime Factors of %d are:\n\n", num);
  PFactor(num);
}
