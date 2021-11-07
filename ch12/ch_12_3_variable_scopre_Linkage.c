#include <stdio.h>

/*
	Variable scopres (vsiblility)
	- block, function prototype, file
*/


int g_i = 123;      // global variable
int g_j;            // global variable

void func1()
{
	g_i++;	// uses g_i
}

void func2()
{
	g_i += 2;	// uses g_i
}


int main()
{
	int local = 1234;

	func1();
	func2();

	printf("%d\n", g_i);    //
	printf("%d\n", g_j);    //
	printf("%d\n", g_j);    //

	return (0);
}