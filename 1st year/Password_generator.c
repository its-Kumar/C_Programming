//password generator

#include <stdio.h>
#include <string.h>

void main()
{
	int lenght, i, s_len, rand_num = 0;
	char password;
	const char search[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_?";

	srand(time(NULL));
	s_len = strlen(search);
	printf("Enter the lenght of password : ");
	scanf("%d", &lenght);
	if (lenght < 8 || lenght > 32)
	{
		printf("\nPassword Lenght should be 8 to 32 char: ");
		return;
	}
	else
	{
		printf("Your Password is :\n ");
		for (i = 0; i < lenght; i++)
		{
			rand_num = rand() % s_len;
			password = search[rand_num];
			printf("%c", password);
		}
	}
	getch();
}
