#include<stdio.h>
#include<conio.h>
void main(){
 int n,i=0,j;
 int FIB(int);
 printf("enter value of n=");
 scanf("%d",&n);
 printf("\n fibonaaci series:\n");
 for(j=0;j<=n;j++){
 	printf("%d ",FIB(i));
 	i++;}
}
int FIB(int n){
 if(n==0||n==1)
 return(n);
 else
   return(FIB(n-1)+FIB(n-2));
}
