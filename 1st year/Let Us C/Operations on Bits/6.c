#include <stdio.h>

//Decoding date field in directory entry using bitwise operators

int main()
{
	unsigned int d = 9, m = 3, y = 1990, year, month, day, date;

	date = (y - 1980) * 512 + (m * 32) + d;
	printf("\nDate=%u", date);
	year = 1980 + (date >> 9);
	month = ((date << 7) >> 12);
	day = ((date << 11) >> 11);
	printf("\nYear =%u", year);
	printf("Month = %u", month);
	printf("Day = %u", day);
}
