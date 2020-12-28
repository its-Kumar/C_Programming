#include <stdio.h>
void func(char, void (*fp)(float));
void fun1(float);
int main(void)
{
	printf("Function main() clled\n");
	func('a', fun1);
	return 0;
}
void fun1(float f)
{
	printf("Function fun1() called\n");
}
void func(char b, void (*fp)(float))
{
	printf("Function func() called\n");
	(*fp)(8.5);
}
