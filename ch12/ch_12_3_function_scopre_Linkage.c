#include <stdio.h>

/*
	Variable scopres (vsiblility)
	- block, function prototype, file.
*/


void f1(int hello, double world);	// to the end of the prototype declaration
// void f1(int , double );	// to the end of the prototype declaration
// function prototype에서는 변수 type이 중요할뿐 변수명이 들어갈 필요는 없다. 사용되지 않음
// 하지만 일관성과 헷갈리지 않기 위해 변수명도 동일하게 적어준다.


double func_block(double d)
{
	double p = 0.0;

	int i;
	for (i = 0; i < 10; i++)
	// for (int i = 0; i < 10; i++)	// C99
	{
		double q = d * i;
		p *= q;

		if (i == 5)
			goto hello;
	}

// goto문은 선언이 이후에 되어도 가능하다.
// 이유는 그런 제한이 있으면 goto문이 위로 올라가서 사용에 제한이 생긴다.
hello:
	printf("Hello World");

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

void f1(int hello, double world)
{


}