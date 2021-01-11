/**
 * @brief Make date object from y,m,d
 *
 * @param date
 * @param y
 * @param m
 * @param d
 */
void formDate(char *date, int y, int m, int d);

// split date into y, m, d
void splitDate(char *date, int *y, int *m, int *d);

// returns true if date is valid
int isValid(char *date);

// returns true if leap year
int isLeap(int y);

// add days into date
void addDays(char *date, int days, char *newDate);

// add months into date
void addMonths(char *date, int imonth, char *newDate);

// add years into date
void addYears(char *date, int iyear, char *newDate);

// compare two dates
int cmpDate(char *date1, char *date2);

// difference of days in two dates
int diffDays(char *date1, char *date2);

// diffrence in d,m,y between two dates
void diffYMD(char *date1, char *date2, int *y, int *m, int *d);

// substract days from date
void subDays(char *date, int days, char *newDate);

// substract months from date
void subMonths(char *date, int dmonth, char *newDate);

// substract years from date
void subYears(char *date, int dyear, char *newDate);

// find week day on the given date
void weekDay(char *date, char *dayWeek);

// revese julian
void revJulian(int j, int y, int *d, int *m);

//julian
void julian(int d, int m, int y);
