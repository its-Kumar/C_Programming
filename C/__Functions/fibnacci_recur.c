/*
NAME:    KUMAR SHANU
ROLL NO: 1773513025 
BRANCH: I.T.
*/
//Implement recurrance relation
//(a)n = (a)n-1 + (a)n-2

#include<stdio.h>
int fib(int n);
void main(){
  int nterms,i,sum=0;
  printf("\t\t**Implement recurrance relation**\n\t\t(a)n = (a)n-1 + (a)n-2\n");
  printf("\tName: Kumar Shanu\n");
  printf("\tRoll No: 1773513025\n");
  printf("\tBranch: I.T. \n");
  printf("Enter number of terms:\n");
  scanf("%d",&nterms);
  for(i=0;i<nterms;i++){
    printf("%d  ",fib(i));
    sum+=fib(i);
}
  printf("\nSum = %d",sum);
  printf("\n" );

}
int fib(int n){
  if(n==0||n==1)
    return 1;
    //(a)n = (a)n-1 + (a)n-2
  return(fib(n-1)+fib(n-2));
}
