#include <stdio.h>
int main()
{
   int a1, a2, a3, sum;

   printf("Enter the angles of Triangle:");
   scanf("%d%d%d", &a1, &a2, &a3);

   sum = a1 + a2 + a3;
   if (sum == 180)
   {
      printf("Triangle is valid.");
   }
   else
   {
      printf("Triangle is not valid.");
   }
   return 0;
}
