int isLeap(int year)
{
    if (year % 100 != 0 && year % 4 || year % 400 == 0)
        return 1;
    else
        return 0;
}
