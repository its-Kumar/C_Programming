#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
}*front=NULL,*rear=NULL;

void enque(int item){
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p->info=item;
	p->link=NULL;
	if(front==NULL && rear==NULL){
		front=p;
		rear=p;
	}
	else{
		rear->link=p;
		rear=p;
	}
}
void deque(){
	struct node *p;
	p=front;
	front=front->link;
	free(p);
}
void del(int item){
	struct node *p=front,*q;
	while(p->link!=NULL){
		if(front->info == item){
			q=front;
			front=front->link;
		}
		if(item == p->link->info){
				q=p->link;
				p->link=q->link;
			}
		p=p->link;
	}
	free(q);
}
int in_queue(int item){
	struct node *p=front;
	while(p!=NULL){
		if(item == p->info)
			return 1;
		p=p->link;
	}
	return 0;
}
int main(void){
	int i,n,l,f=0;
	int string[50];
	struct node *p;
	printf("Enter the no of frames:\n");
	scanf("%d",&n);
	printf("Enter the lenght of string/No of processes : ");
	scanf("%d",&l);
	for(i=0; i<l; i++)
		scanf("%d",&string[i]);
	for(i=0; i<l; i++){
		if(!in_queue(string[i])){
			if(i>=n)
				deque();
			enque(string[i]);
			f++;
		}
		else{
			del(string[i]);
			enque(string[i]);	
		}
		printf("\n----------------------\n");
	p=front;
	while(p!=NULL){
		printf("%d  ",p->info);
		p=p->link;
	}
	}
	printf("\nNo of page fault = %d",f);
	return 0;
}
