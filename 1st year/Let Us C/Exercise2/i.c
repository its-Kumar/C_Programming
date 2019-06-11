#include<stdio.h>
int main()
{
   float area,peri,l,b;
   printf("Enter length & breath:");
   scanf("%f%f",&l,&b);
   
   area=l*b;
   printf("Area = %f	",area);
   peri=2*(l+b);
   printf("Perimeter = %f	",peri);
   if(area<peri)
   printf("Area is less than Perimeter.");
   else
   printf("Area is greater than Perimeter.");
   
return 0;
}
