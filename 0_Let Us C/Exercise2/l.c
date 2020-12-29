#include <stdio.h>
#include <math.h>

int main()
{
   int x, y;

   printf("Enter a point(x,y):");
   scanf("%d%d", &x, &y);
   if (x == 0 && y == 0)
   {
      printf("Point is origin, viz(0,0).");
   }
   else if (x == 0)
   {
      printf("Point lies on y-axis");
   }
   else if (y == 0)
   {
      printf("Point lies on x-axis");
   }
   else
   {
      printf("Point neither lies on x-axis nor y-axis.");
   }
   return 0;
}
