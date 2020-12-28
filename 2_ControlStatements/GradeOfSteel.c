#include <stdio.h>

void main()
{
	int hr, ts, k;
	float ca;
	printf("Enter The carbon containent:");
	scanf("%f", &ca);
	printf("Enter the Hardeness:");
	scanf("%d", &hr);
	printf("Enter strength:");
	scanf("%d", &ts);
	if (hr > 50 && ca < 0.7 && ts > 5600)
		printf("\n Grade is 10");
	else if (hr > 50 && ca < 0.7)
		printf("\n Grade is 9");
	else if (ca < 0.7 && ts > 5600)
		printf("\n Grade is 8");
	else if (hr > 50 && ts > 5600)
		printf("\n Grade is 7");
	else if (hr > 50 || ts > 5600 || ca < 0.7)
		printf("\n Grade is 6");
	else
		printf("\n Grade is 5");
	return 0;
}
