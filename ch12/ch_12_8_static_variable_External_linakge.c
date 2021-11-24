#include <stdio.h>
#include "ch_12_8_static_variable_External_linakge_second.c"

/*
	Static variable with external linkage
	- File scope, external linkage, static storage duration
	- External storage class
	- External variables
*/

int	g_int;
// static variable은 한번만 알아서 초기화 해주면 된다.
// 그래서 프로그래머가 값을 넣지 않으면 null로 알아서 된다.
// array 역시 마찬가지이다.
// local variable은 다르다.
// 하지만 static이 알아서 초기화 해주더라도 초기화하는것을 추천
	// 내 생각에는 static과 dynamic을 구분한다면 나중에 헷갈리거나 실수할 수 있으니까
	// 애초에 다 초기화하는 습관을 두는게
	// 실수 방지와 코드를 다시 읽을 떄에도 도움된다 생각한다.

/*
	Initializing External Variables
*/
int	g_int = 10;
double	g_arr[1000] = { 0.0, };

int x = 5;                  // ok, constant expression
int y = 1 + 2;              // ok, constatn expressioni
size_t z = sizeof(int);     // ok, sizeof is a constant expression
// int x2 = 2  * x;         // not ok, x is a variable


void fun()
{
	printf("g_int in fun() %d %p\n", g_int, &g_int);
	g_int += 10;
}

int main()
{
	/*
		defining declaration vs referenceing decalaration
	*/
	extern   int g_int;          // Optional
	// gcc에서 함수안에 있는 전역변수와 이름이 같은 변수는 extern과 같이 된다.
	// 바깥 영역에 있는 것을 찾아서 연결
	// linker에서 바깥에서 찾아줌
	// 하지만 밖에 동일한 값이 2개 이상 있다면?
	// extern  int g_int = 1024;    // Error in block scope

	// int g_int = 123;				// hides global g_int;	

	extern double g_arr[];			//

	printf("g_int in main() %d %p\n", g_int, &g_int);
	g_int += 1;

	fun();
	fun_sec();

	return (0);
}