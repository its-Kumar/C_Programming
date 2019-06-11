#include<stdio.h>
#include<conio.h>
void main()
{int i, n,s1=0,s2=0;
printf("\n Enter the value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{if(i%2==0)
s1+=i;
else
s2+=i;

}printf("\n the sum of odd numbers=%d",s2);
printf("\n the sum of even numbers=%d",s1);
	
}

