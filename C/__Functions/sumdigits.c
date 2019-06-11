#include<stdio.h>
long int  sumdigits(long int n){
  if(n/10==0)
    return n;
  return (n%10 +sumdigits(n/10));
}
void main(){
  long int n;
  printf("Enter a number:\n" );
  scanf("%ld",&n);
  printf("sum of digits = %ld\n",sumdigits(n) );
}
