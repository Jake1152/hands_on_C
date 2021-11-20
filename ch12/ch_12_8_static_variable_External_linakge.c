#include <stdio.h>

int g_int = 0;
double g_arr[1000] = { 0.0 ,};

/*
    Initializing External Variables
*/

int x = 5;                  // ok, constant expression
int y = 1 + 2;              // ok, constatn expressioni
size_t z = sizeof(int);     // ok, sizeof is a constant expression
// int x2 = 2  * x;         // not ok, x is a variable


void func()
{
	printf("g_int in func() %d %p\n", g_int, &g_int);
	g_int += 10;
}

int main()
{
    /*
        defining declaration vs referenceing decalaration
    */
    extern   int g_int;          // Optional
	// 바깥 영역에 있는 것을 찾아서 연결
	// linker에서 바깥에서 찾아줌
	// 하지만 밖에 동일한 값이 2개 이상 있다면?
    // extern  int g_int = 1024;    // Error in block scope

	// int g_int = 123;				// hides global g_int;

	extern double g_arr[];			//

	printf("g_int in main() %d %p\n", g_int, &g_int);
	g_int += 1;

	func();

    return (0);
}