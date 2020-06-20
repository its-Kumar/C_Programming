#include <stdio.h>
void main()
{
	char s[50];
	char ch;
	int N, X, p, i, T, j, k = 0;
	int max, min;
	scanf("%d", &T);
	for (j = 0; j < T; j++)
	{
		printf("\n");
		scanf("%d%d", &N, &X);
		for (i = 0; i < N; i++)
		{
			scanf("%c", &ch);
			if (ch == 'L' || ch == 'R')
				s[i] = ch;
			else
			{
				printf("Enter either 'L' or 'R':");
				i = i - 1;
			}
		}
		max = min = X;
		for (i = 0; i < N; i++)
		{
			if (s[i] == 'L')
			{
				X = X - 1;
				if (X < min)
					min = X;
			}
			if (s[i] == 'R')
			{
				X = X + 1;
				if (max < X)
					max = X;
			}
		}

		p = max - min + 1;
		s[k] = p;
		printf("%d", s[k]);
		k++;
	}
}
