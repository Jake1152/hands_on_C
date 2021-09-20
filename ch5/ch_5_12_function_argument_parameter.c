#include <stdio.h>

void draw(int n);

int main()
{
	int i = 5;
	char c = '#'; // 35
	float f = 7.1f;

	draw(i);  // i 값 함수 호출하는 
	draw(c); // draw((int)c); 엄밀하게 표현하면 이러하다.
	draw(f); // draw(int)f);
	

	/* Arguments vs. Parameters
	// actual argument, actual parameter -> argument (values)
	// formal argument, formal parameter -> parameter (variables)
	// argument->인자, 인수, 실제 값
	// parameter->매개변수 f=2x, 변수, 매개되는 변수, formal argument 형식 인수, 즉 parameter

	return (0);
	*/
}
//int n은 변수 어떤한 값이 들어와도 수행 가능해야한다.
// parameterization 되어있다.
// 변수 i에 들어가있는 값
// 함수 호출되는 측면에서보면
// 변수n이 parameter
void draw(int n)
{
	// parameter에 있는 값이
	// int n; 선언되고 값이 할당된 것처럼 쓰인다.
	while (n--)		
		putchar('*');
	putchar('\n');
	return ;
}

/*

putchar, printf()
차이 문자열
문자
둘의 속도차이는?
둘은 어느 library에서 오는가?
둘의 구현은 어떻게 달라지는가?

*/
