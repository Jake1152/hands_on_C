#include <stdio.h>

/*
	Automatic storage class
	- Automatic storage duration, block scope, no linkage
	- Any variable declared in a block or function header
*/

void func(int k);

int main()  // Note: main() is a function.
{
	// auto int a; // keyword auto : a storage-class specifier
	int a; // keyword auto : a storage-class specifier
	a = 1024;
	// printf("%d\n", a);
	// auto int b = a * 3;
	// C++ auto라는 키워드가 C의 auto와 완전히 다르다.

	int i = 1;
	int j = 2;

	printf("i %lld\n", (long long)&i);

	{
		int i = 3;  // name hiding
		printf("i %lld\n", (long long)&i);

		int ii = 123;
		// j is visible here
		printf("j = %d\n", j);
		// j 가 위에 영역에서 선언 했기에 stack에 여전히 있기에 쓸 수 있다.
		// i의 경우 위에 영역에도 있지만 현재영역에도 있기 때문에 name hiding된 것이다. 말그대로 가려졌을 뿐 메모리 영역에는 여전히 있다.
	}

	// ii is not visible here
	printf("i %lld\n", (long long)&i);	// which i?
	// 위에 영역이 아닌 같은 범위에 있는 영역에서 선언되었던 i가 나온다.
	// 바로 위에 영역에 있던 i는 stack에서 사라진 이후이다.

	for (int m = 1; m < 2; m++)
		printf("m %lld\n", (long long)&m);

	func(5);

	for (int m=3; m < 4; m++)
		printf("m %lld\n", (long long)&m);

	return (0);
}

void	funct(int k)
{
	int i = k * 2;
	printf("i %lld\n", (long long)&i);
}