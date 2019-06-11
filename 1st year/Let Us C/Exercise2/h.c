#include<stdio.h>
int main()
{
   int num;
   printf("Enter any number:");
   scanf("%d",&num);
   
   if(num<0)
   {
   	printf("Absolute value is -%d",num);
   }
   else{
   	printf("Absolute value is %d",num);
   }
return 0;
}
