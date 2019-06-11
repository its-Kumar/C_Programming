#include<stdio.h>
float power(float,int);
void main(){
  float a,p;
  int n;
  printf("Enter a and n\n" );
  scanf("%f%d",&a,&n);
  p=power(a,n);
  printf("%f raised to power %d is %f\n",a,n,p);
}
float power(float a,int n){
  if(n==0)
    return 1;
  else
    return(a*power(a,n-1));
}
