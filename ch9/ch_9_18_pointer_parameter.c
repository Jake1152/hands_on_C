#include <stdio.h>

void    swap(int *u, int *v)
{
	printf("u, v address : %p %p\n", &u, &v);
	// u,v는 지역변수이다 서로 다른 변수이다.
	// 헷갈릴때는 주소값을 찍어본다.
	// swap
	int temp = *u;
	*u = *v;
	*v = temp;
	printf("%d %d in swap function \n", *u, *v);
}
int main()
{
	int a = 123;
	int b = 456;

	printf("a, b address : %p %p\n", &a, &b);

	swap(&a, &b);
	printf("%d %d\n", a, b);
	// call by value이므로 원본 변수가 서로 바뀌지 않느낟.
	// 호촐된 swap함수의 로컬영역에서만 바뀌고 함수 호출이 끝나면 메모리에서 사라진다.
	// 메모리에서 사라지는 것은 운영체제에서 처리하는가?
	// 해당 코드는 어떻게 되어있는가?    

	return (0);
}