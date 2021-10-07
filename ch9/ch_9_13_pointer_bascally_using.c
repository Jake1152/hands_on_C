#include <stdio.h>

int main()
{
	int a, b;

	a = 123;

	int *a_ptr; // * : asterisk
	// int형 변수를 저장할 수 있는 포인터
	// 포인터 변수 선언
	// 정수형 변수의 주소를 저장할 수 있다.

	a_ptr = &a;	// & : address-of operator
	// 첫번쨰 주소를 주소연산자로 가져와서 a_ptr에 저장한다.

	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	*a_ptr = 456;   // * : re-direction or

	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	// b = a_ptr;	// 정수형변수에 정수를 집어넣으려고 한다. warning 발생
	// indirection
	// b = *a_ptr; 이렇게 하려는 것을 실수로 a_ptr 한것인지 warning 으로 표현
	// warning으로 표현된 이유는 c언어 철학에 달려있다.
	// 프로그래머의 의도일 수 있으니까 자율 부여.
	// 문법적으로는 가능하지만 권장하지 않는다.
	b  = *a_ptr;

	printf("%d\n", b);

	*a_ptr = 789;

	printf("%d\n", b);
	printf("%d %d %p %p\n", a, *a_ptr, a_ptr, &b);
	
	b = 12;

	printf("%d\n", b);
	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	a = 1004;
	printf("%d %d %p %d\n", a, *a_ptr, a_ptr, b);
	// printf("%d\n", b);

	return (0);
}
