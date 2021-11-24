#include <stdio.h>
#include "ch_12_9_static_variable_inernal_linakge_second.c"
#include "ch_12_9_static_variable_inernal_linakge_third.c"

/*
	Static variable with external linkage
	- File scope, external linkage, static storage duration
	- Internal storage class
	- External variables
*/

int g_int = 123; // defining declation
//static int	g_int = 123; 
// 현재 파일에서만 사용가능

void fun();
void fun_second();
void fun_third();


int main()
{
		
	fun();
	fun_second();
	fun_third();

	return (0);
}

void fun()
{
	extern int	g_int;	// optional

	g_int += 1;
	printf("g_int in fun() %d %p\n", g_int, &g_int);
}
