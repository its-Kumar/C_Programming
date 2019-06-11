/*
  N queen problem
  Placing N chess queens to NxN chess board so that no two queens attack each other
  Queen can move squares along diagonally, horizontally and vertically
*/
//print 1 if queen is placed at position ,0 else


#include<stdio.h>
#include<stdlib.h>

void main(){
  int N, **q,i,j,k=0;

  printf("Enter N = ");
  scanf("%d", &N);
  if(N <4){
  	printf("No Solution...\nTry again...");
  	exit(0);
  }
  q=calloc(N,sizeof(int *));
  for(i=0; i<N; i++)
    q[i]= (int *)calloc(N,sizeof(int));


//placing queens
  for(i=0; i<N; i++){
    for(j=0; j<N; j++)
      {
        k=(2*i) +1;
        if(k > N){
          k=k -N -1;
        }
        q[i][k]=1;
      }
  }
	printf("\n");
  for(i=0; i<N; i++){
    for(j=0; j<N; j++)
      printf(" %d", q[i][j]);
    printf("\n");
  }

}
