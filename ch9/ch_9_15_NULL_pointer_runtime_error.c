#include <stdio.h>

int main()
{
	/* int a = 1234;
	printf("%p\n", &a);
	printf("%d\n", a);
	*/

	// int *ptr = 1234;

	// printf("%p\n", ptr);
	// printf("%d\n", *ptr);


	// runtime error 방지하는 방법
	int* safer_ptr;	// = NULL; // nullptr c++ style
	// NULL을 넣는 이유는 포인터 변수를 사용해도 되는지 안되는지 알기 위해서이다.

	int a = 123;

	/* safer_ptr = &a; */
	// 이렇게하면 확실한 케이스이다. 하지만 항상 그렇게 쓰이기 힘들 수 있다.

	// 어떤 경우에는 runtime에 결정될 수 있다.
	int b;
	scanf("%d", &b);

	if (b % 2 == 0)
		safer_ptr = &a;

	if (safer_ptr != NULL)
		printf("%p\n", safer_ptr);

	if (safer_ptr != NULL)
		printf("%p\n", *safer_ptr);

	return (0);
}