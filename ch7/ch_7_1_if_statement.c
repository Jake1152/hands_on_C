#include <stdio.h>

int main()
{
	int number;

	printf("Input a positive integer : ");
	scanf("%d", &number);

	/*
	if (number % 2 != 0)
	// if (number % 2 == 1)
		printf("Odd");
	*/

	// ==는 관계연산자
	if (number % 2 == 0)
		printf("Even");
	else // if (number % 2 == 1) if (number % 2 != 0)
		printf("Odd");

	return 0;
}