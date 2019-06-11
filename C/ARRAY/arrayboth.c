#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int A[50],n,B[50],i,ch;
	int INS(int*,int);
	int DEL(int*,int);
	printf("Enter the Number of Elements in array A:-\n");
	scanf("%d",&n);
	printf("Enter the Elements of array A:-\n");
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("Array A is :-\n");
	for(i=0;i<n;i++){
		printf(" %d",A[i]);
	}
	while(1){
	printf("\nEnter 1 for Deletion:-\nEnter 2 for Insertion:-\nEnter 3 for Exit:-\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			n=DEL(A,n); break;
		case 3:
			exit(0);
		case 2:
			n=INS(A,n); break;
		default :
			printf("Wrong Choice......");			
		}
	}
}
                    /* logic of programe (delete a number of a given index) */
int DEL(int *A,int n){
	int i,k;
	if(n==0){
			printf("Error:-Underflow Case........");
			exit(0);
	}
	printf("Enter the Index Number Want to Delete:-\n ");
	scanf("%d",&k);
	if(k<0||k>n){
		printf("Error:-Wrong Index...........");
		return(n);
	}
	else{		
	for(i=k;i<n;i++)
		*(A+i)=*(A+i+1);
	n=n-1;
	printf("Resultant Array:-\n");
	for(i=0;i<n;i++)
		printf(" %d ",*(A+i));	
	return(n);
	}
}
                         	/* logic of programe (insert a number at a given index) */
int INS(int *A,int n){
	int m,k,i;
		if(n==50){
			printf("Over flow Case.........");
			exit(0);
	}
	printf("Enter the Number to be Inserted:-\n");
	scanf("%d",&m);
	printf("The Index Number at where number to be Inserted:-\n");
	scanf("%d",&k);
	if(k<0||k>n){                              // n is size of array
		printf("Wrong Index...........");
		return(n);
	}
	else{
	for(i=n;i>=k;i--){
		*(A+i+1)=*(A+i);
	}
	n=n+1;
	*(A+k)=m;
	printf("Resultant Array:-\n");
	for(i=0;i<n;i++)
		printf(" %d",*(A+i));
	return(n);
	}
}
	

