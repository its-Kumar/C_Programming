#include<stdio.h>
int in_queue(int item,int q[],int n){
	int i;
	for(i=0; i<n; i++){
		if(q[i]==item)
			return 1;
	}
	return 0;
}
int main(void){
	int p=-1,n,f=0,q[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int string[50],l,i,j;
	
	printf("Enter the no of frames:\n");
	scanf("%d",&n);
	printf("Enter the lenght of string/No of processes : ");
	scanf("%d",&l);
	for(i=0; i<l; i++)
		scanf("%d",&string[i]);
	for(i=0; i<l; i++){
		if(!in_queue(string[i],q,n)){
			p=(p+1)%n;
			q[p]=string[i];
			f++;
			printf("\n\t----------------------------\n\t");
			for(j=0; j<n; j++)
				printf("\t%d", q[j]);
			printf("\n\t----------------------------\n");
		}
	}
	printf("\nNo of page fault = %d",f);
}
