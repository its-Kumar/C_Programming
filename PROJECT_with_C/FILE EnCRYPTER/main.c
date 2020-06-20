#include "encrypter.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int choice;
	char f_name[20];
	FILE *fp = NULL;

	printf("\t\t\tWelcome to File Encrypter\n\n");
	printf("\n\tEnter the file name : ");
	gets(f_name);
	fp = fopen(f_name, "r+");
	if (fp == NULL)
	{
		printf("\tFile Openning Error..!!!");
		exit(-1);
	}
	while (1)
	{

		printf("\n\n\t1.Encrypt File\n\t2.Decrypt File\n\t3.Clear Encrypted file\n\t4.Clear Decrypted File\n\t5.Exit\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			encrypt(fp);
			break;
		case 2:
			decrypt();
			break;
		case 3:
			remove("encrypt.txt");
			printf("\n\tencrypt file cleared..\n\n");
			break;
		case 4:
			remove("decrypt.txt");
			printf("\n\tdecrypt file cleared...\n\n");
			break;
		case 5:
			exit(1);
		default:
			printf("\tWrong Choice..!!!\n\n\n");
		}
	}
	fclose(fp);
	return 0;
}
