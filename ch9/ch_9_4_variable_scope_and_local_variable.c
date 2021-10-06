#include <stdio.h>

// file scope variable
int a;

// declration
int int_max(int i, int j);

// linking할때 body를 찾아준다.
int int_max(int i, int j)
{
	a= 456; // file scope variable이라 파일 내부에 다른 변수들에서 접근가능
	// int m이 유효한 범위는 int_max(){} 범위안에서만이다.
	// 해당범위에서만 볼수있고 사용할 수 있다.
	int m;
	m = i > j ? i : j;
	return m;
}

int main()
{
	// m = 123; // m은  int_max함수에서 선언된 지역변수이므로 main함수에서는 쓸수없다.
	// main function 안에서는 invisible하다.
	// 변수는 변수가 사용할수있는 영역이 있다.
	int a; // file 변수로 a가 선언되었었지만 다시 main 안에서 a를 선언해서 main안에서는 다른 변수이다.

	printf("%d\n", a);
	printf("%p\n", &a); // & 주소가 무엇인지 알려주는 operator

	{
		int a;
		a = int_max(4, 5);

		printf("%d\n", a);
		printf("%p\n", &a);
	}

	printf("%d\n", a);
	printf("%p\n", &a);
	
	// a = int_max(1, 2);
	// m = 123;
	// int_max에서 호출해서 썼더라도 범위를 초과하므로 main function에서는 모르는 변수이다.

	// printf("%d\n", a);

	return (0);
}