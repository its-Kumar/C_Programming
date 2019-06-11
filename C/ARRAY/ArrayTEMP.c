#include<stdio.h>
#include<stdlib.h>


int del(int*,int);
int insert(int*,int); 
int main(){
	int a[50],i,n,ch;

	printf("Enter the no of Elements(n):\n");
	scanf("%d",&n);
	printf("Enter the Elements:\n ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Array is:\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
		
	printf("\nMenu\n1.Insert an element\n2.Delete an Element\n3.exit");
		while(1){
			printf("\nEnter your choice:\n");
			scanf("%d",&ch);
			switch(ch){
				case 1:
					n=insert(a,n);
					printf("After Insertion:\nArray:\n");
					for(i=0;i<n;i++)
						printf("%d  ",a[i]);
					break;
				case 2:
					n=del(a,n);
					printf("After Deletion:\nArray:\n");
					for(i=0;i<n;i++)
						printf("%d  ",a[i]);
					break;
				case 3:
					exit(0);
				default:
					printf("Incorrect Choice....!!");
				}
		}
}
int insert(int *p,int n){
	int i,k;
	int item;
	if(n==50){
		printf("\nError:Overflow..!!");
		exit(0);
		}
	printf("Enter the index no of the Element:\n");
	scanf("%d",&k);
	if(k<0||k>n){
		printf("\nError:Index is not valid...!!");
		exit(0);
	}
	printf("Enter the value you want to insert:");
	scanf("%d",&item);
	for(i=n;i>=k;i--){
		*(p+i+1)=*(p+i);
	}
	*(p+k)=item;
	return n=n+1;
}
int del(int *p,int n){
	int i,k;
	int item;
	if(n==0){
		printf("\nError:Underflow..!!");
		exit(0);
		}
	printf("Enter the index no of the Element:\n");
	scanf("%d",&k);
	if(k<0||k>n){
		printf("\nError:Index is not valid...!!");
		exit(0);
	}
	for(i=k;i<n;i++){
		*(p+i)=*(p+i+1);
	}
	return n=n-1;
}
