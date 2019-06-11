#include <stdio.h>
#include <math.h>

int main()
{
   int x,y,x1,y1,X,Y;
   float r,d;
   printf("Enter the center of the circle(x,y):");
   scanf("%d%d",&x,&y);
   printf("Enter the radius of the circle(r):");
   scanf("%f",&r);
   printf("Enter another point(x1,y1):");
   scanf("%d%d",&x1,&y1);
   X=x1-x;
   Y=y1-y;
   d=sqrt(pow(X,2)+pow(Y,2));
   if(d<r){
   	printf("The point lies inside the circle.");
   }
   else if(d==r){
   	printf("The point lies on the circle.");
   }
   else{
   	printf("The point lies outside the circle.");
   }
   return 0;
}
