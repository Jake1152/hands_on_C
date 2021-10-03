#include <stdio.h>
#include <string.h> // strlen()

void    print_star(int n);


int main()
{
	int n;
	scanf("%d", &n);

	print_star(n);
	printf("    Jinho IM\n");
	printf("    Seoul, Korea\n");    
	printf("************\n");
	/*
	변형가능한 형태로 만든다.
	- 별의 갯수가 변경될떄
		- 같은 코드가 2번 나옴
		- 함수로 변경
	
	*/
	
	return (0);
}

void    print_star(int n)
{
	for (int i = 0; i < n; i++)
		putchar("*");
	putchar("\n");
}
