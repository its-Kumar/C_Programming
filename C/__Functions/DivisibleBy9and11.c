#include<stdio.h>

int divisibleBy9(long int n){
  int sumofdigits;
  if(n==9)
    return 1;
  if(n<9)
    return 0;
  sumofdigits=0;
  while(n>0){
    sumofdigits+=n%10;
    n/=10;
  }
  divisibleBy9(sumofdigits);
}
int divisibleBy11(long int n){
  int s1=0,s2=0,diff;
  if(n==0)
    return 1;
  if(n<10)
    return 0;
  while(n>0){
    s1+=n%10;
    n/=10;
    s2+=n%10;
    n/=10;
  }
  diff=s1>s2?(s1-s2):(s2-s1);
  divisibleBy11(diff);
}
void main(){
  long int num;
  printf("Enter any number:\n" );
  scanf("%ld",&num);
  if(divisibleBy9(num))
    printf("%ld is Divisible By 9\n",num );
  if(divisibleBy11(num))
    printf("%ld is Divisible By 11\n",num );
  else
    printf("%d is not Divisible By 9 or 11\n",num );
}
