#include<stdio.h>
int main()
{
   int x1,x2,x3,y1,y2,y3;
   float m1,m2;
   
   printf("Enter the 3 points.\n");
   printf("Enter the values of x1, x2 & x3:");
   scanf("%d%d%d",&x1,&x2,&x3);
   printf("Enter the values of y1, y2 &y3:");
   scanf("%d%d%d",&y1,&y2,&y3);
   
   m1=(y2-y1)/(x2-x1);
   m2=(y3-y2)/(x3-x2);
   if(m1==m2){
   
   printf("Points fall on one straight line.");
}
   else
   {
   printf("Points are not fall on one straight line.");
}
return 0;
}
