#include <stdio.h>

void say_hello(void);

int main()
{
	int x, y, z;
	
	x = 1;
	y = 20;
	z = 3;

	z = x + y;

	say_hello();

	return (0);
}

void say_hello(void)
{
	// say_hello 함수에서 printf 함수를 호출하는 형태
	printf("Hi, how are you?\n");
}
