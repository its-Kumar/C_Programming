// A menu driven program for elementry database management
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	FILE *fp,*ft;
	char another,choice;
	struct emp{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	char empname[40];
	long int recsize;
	
	fp=fopen("EMP.DAT","rb+");
	if(fp==NULL){
		fp=fopen("EMP.DAT","wb+");
		
		if(fp==NULL){
			puts("Cannot Open File....");
			exit(1);
		}
	}
	recsize=sizeof(e);
	
	while(1){
			
		gotoxy(30,10);
		printf("1.Add Records");
		gotoxy(30,12);
		printf("2List Records");
		gotoxy(30,14);
		printf("3.Modify Records");
		gotoxy(31,16);
		printf("4.Delete Records");
		gotoxy(30,20);
		printf("Your choice:\n");
		
		fflush(stdin);
		choice=getche();
		switch(choice){
			case 1:
				
				fseek(fp,0,SEEK_END);
				another='y';
				while(another=='y'){
					printf("\nEnter name,age and basic salary:");
					scanf("%s %d %f",e.name,&e.age,&e.bs);
					fwrite(&e,recsize,1,fp);
					printf("\nAdd another Record (y/n):");
					fflush(stdin);
					another=getche();
				}
				break;
			case 2:
				
				rewind(fp);
				
				while(fread(&e,recsize,1,fp)==1)
					printf("\n%s %d %f",e.name,e.age,e.bs);
				break;
				
			case 3:
				
				another='y';
				while(another=='y'){
					printf("\nEnter name of employee to modify");
					scanf("%s",empname);
					
					rewind(fp);
					while(fread(&e,recsize,1,fp)==1){
						if(strcmp(e.name,empname)==0){
							printf("\nEnter new name, age and bs:\n");
							scanf("%s %d %f",e.name,&e.age,&e.bs);
							fseek(fp,-recsize,SEEK_CUR);
							fwrite(&e,recsize,1,fp);
							break;
						}
					}
					printf("\nModify another record(y/n)");
					fflush(stdin);
					another=getche();
				}
				break;
			
			case 4:
				another='y';
				while(another=='y'){
					printf("Enter name of employee to delete:");
					scanf("%s",empname);
					
					ft=fopen("TEMP.DAT","wb");
					rewind(fp);
					while(fread(&e,recsize,1,ft)==1){
						if(strcmp(e.name,empname)!=0)
							fwrite(&e,recsize,1,ft);
						}
					fclose(fp);
					fclose(ft);
					remove("EMP.DAT");
					rename("TEMP.DAT","EMP.DAT");
					
					fp=fopen("EMP.DAT","rb+");
					
					printf("\nDelete another record(y/n):");
					fflush(stdin);
					another=getche();
				}
				break;
			case 0:
				fclose(fp);
				exit(0);
		}
	}
} 

