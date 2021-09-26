#include <stdio.h>

int main()
{
	/* promotions in assignments */
	// short s = 64;
	// int i = s;

	// float f = 3.14f;
	// double d = f;

	/* demotion in assignments*/
	// d = 1.25;
	// f = 1.25;   // 컴파일러에 따라 다르게 표현될 수 있다. 1.25 작은 값이라 double, float일때 같다.
	// f = 1.123;  // double에 있는 것을 float에 넣을려고 하면 문제 발생
	// f = 1.123f; // float로 되기에 문제가 없다.

	/* ranking of types in operations */
	// long double > double > float
	// unsigned long long, long long
	// unsigned long, long
	// unsigned , int
	// short int, unsigned short int
	// signed char, char, unsigned char
	// _Bool
	// Ref: Google 'Interger conversion rank'
	// 기본적으로 메모리가 큰 쪽이 랭킹이 높다.
	// 같은 줄에 있는 것들은 랭킹이 같다.
	// d = f + 1.234; // d가 double이라 f가 float이지만 promotion되어서 문제가 없다.
	// f = f + 1.234; // 1.234 double이라서 경고 발생
	// 거대한 프로그램에서는 문제가 발생할 수 있다.
	// 미미한 차이가 커지기 때문.

	/* automatic promotion of funtion arguments */
	// 1. FUntions without prototypes
	// 2. Variadic funtions (ellipsis)
	// c++에서도 나온다

	/* casting operators */
	/*  */
	// d = (double)3.14f;
	// i = 1.6 + 1.7;
	// i = (int)1.6 + (int)1.7;
	// 자료형에 따라 결과가 크게 달라질 수 있다.
	// casting operator를 통해 의도한것이라는 것을 명확하게 표현하는 것이 중요하다.
	// C++에서 권장하는 게 있지만 그것은 C++에서 배운다.
	// 관습적으로 C스타일의 casting operator도 많이 쓴다.	

	/* more examples */
	char c;
	int i;
	float f;
	f = i = c = 'A'; // 65
	// 유효숫자 갯수가 다르다. 
	printf("%c %d %f\n", c, i, f);
	c = c + 2; // 'C', 67
	i = f + 2 * c;
	printf("%c %d %f \n", c, i, f);
	c = 1106;
	printf("%c\n", c);
	c = 89.99;
	printf("%c\n", c);

	return (0);
}