//Program to find the sum of two numbers

#include<stdio.h>
#define SUM(FNAME,DTYPE)\
    DTYPE FNAME(DTYPE x,DTYPE y)\
    {\
    return (x+y);\
    }

SUM(sum_int,int)
SUM(sum_f,float)
SUM(sum_d,double)
int main(void){
    printf("%d\n",sum_int(2,4));
    printf("%f\n",sum_f(2.3,5.6));
    printf("%lf\n",sum_d(4.56,32.4));

    return 0;
}
