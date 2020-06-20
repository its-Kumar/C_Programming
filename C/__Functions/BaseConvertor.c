#include <stdio.h>
#include <stdlib.h>

void convert(int, int);
void main()
{
  int num, base;
  printf("Enter a positive decimal number:\n");
  scanf("%d", &num);
  if (num < 0)
    exit(0);
  printf("Enter the Base:\n");
  scanf("%d", &base);
  printf("\n %d in %d base is:\n", num, base);
  convert(num, base);
}
void convert(int n, int base)
{
  int rem = n % base;
  if (n == 0)
    return;
  convert(n / base, base);
  if (rem < 10)
    printf("%d", rem);
  else
    printf("%c", rem - 10 + 'A');
}
