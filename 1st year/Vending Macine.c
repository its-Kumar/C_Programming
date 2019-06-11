//design a vending machine

#include<stdio.h>
#include<stdlib.h>

void Money(int);
void main(){
	int choice, price=0;

	while(1){
	printf("\n\t\t\t***Vending Machine***\n");
	printf("\t\tName List of Beverge: \n\n");
	printf("1. Pepsi");						printf("\t\t\tRs. 15.00\n");
	printf("2. Miranda");					printf("\t\t\tRs. 15.00\n");
	printf("3. Mountain dew");				printf("\t\t\tRs. 15.00\n");
	printf("4. Coca Cola");					printf("\t\t\tRs. 13.00\n");
	printf("5. Revive");					printf("\t\t\tRs. 20.00\n");
	printf("6. Nestle Milo");				printf("\t\t\tRs. 25.00\n");
	printf("7. Cincau");					printf("\t\t\tRs. 15.00\n");
	printf("8. Chrysthemum Tea");			printf("\t\tRs. 15.00\n");
	printf("9. Lipton Ice Lemon Tea");		printf("\t\tRs. 20.00\n");
	printf("10. Mineral water");			printf("\t\tRs. 20.00\n");
	printf("11. Cadbury Black Forest");		printf("\tRs. 50.00\n");
	printf("12. Kitkat");					printf("\t\t\tRs. 35.00\n");
	printf("13. Crispy");					printf("\t\t\tRs. 40.00\n");
	printf("14. Crunch");					printf("\t\t\tRs. 15.00\n");
	printf("15. Mars");						printf("\t\t\tRs. 20.00\n");
	printf("16. Kinder Bueno");				printf("\t\tRs. 15.00\n");
	printf("17. White Kinder Bueno");		printf("\t\tRs. 20.00\n");
	printf("18. Milky Bar");				printf("\t\t\tRs. 15.00\n");
	printf("19. M&M");						printf("\t\t\t\tRs. 50.00\n");
	printf("20. Choki Choki");				printf("\t\t\tRs. 70.00\n");
	printf("0. Exit From Vending Machine.");
	printf("\n\nEnter your choice: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("You choose Pepsi");
			price=15;
			break;
		case 2:
			printf("You choose Miranda");
			price=15;
			break;
		case 3:
			printf("You choose Mountain dew");
			price=15;
			break;
		case 4:
			printf("You choose Coca Cola");
			price=13;
			break;
		case 5:
			printf("You choose Revive");
			price=20;
			break;
		case 6:
			printf("You choose Nestle Milo");
			price=25;
			break;
		case 7:
			printf("You choose Cincau");
			price=15;
			break;
		case 8:
			printf("You choose Chrysthemum Tea");
			price=15;
			break;
		case 9:
			printf("You choose Lipton Ice Lemon Tea");
			price=20;
			break;
		case 10:
			printf("You choose Mineral water");
			price=20;
			break;
		case 11:
			printf("You choose Cadbury Black Forest");
			price=50;
			break;
		case 12:
			printf("You choose Kitkat");
			price=35;
			break;
		case 13:
			printf("You choose Crispy");
			price=40;
			break;
		case 14:
			printf("You choose Crunch");
			price=15;
			break;
		case 15:
			printf("You choose Mars");
			price=20;
			break;
		case 16:
			printf("You choose Kinder Bueno");
			price=15;
			break;
		case 17:
			printf("You choose White Kinder Bueno");
			price=20;
			break;
		case 18:
			printf("You choose Milky Bar");
			price=15;
			break;
		case 19:
			printf("You choose M&M");
			price=50;
			break;
		case 20:
			printf("You choose Choki Choki");
			price=70;
			break;
		case 0:
			exit(1);
		default:
			printf("Wrong choice..!!");
		}
		Money(price);
	}
}
void Money(int price){
	int money,xtra;

	printf("\n\nEnter Money: ");
	scanf("%d", &money);

	if(money == price)
	{
		printf("ACCEPTED..!!\n");
		printf("Please! Collect your item..");
	}
	else if(money < price){
		xtra = price - money;
		printf("NOT ACCEPTED..!!\n");
		printf("Please! insert more money. (Rs. %d)", xtra);

	}
	else{
		xtra = money -price;
		printf("ACCEPTED..!!\n");
		printf("Please! collect your change. (Rs. %d)\n", xtra );
		printf("Please! Collect your item..");
	}
}
