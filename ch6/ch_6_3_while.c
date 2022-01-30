#include <stdio.h>


int main()
{
	/*
	while (expression)
		statement
	*/
	int i;

	i = 1;
	while (i < 5)			// infinite loop
		printf("Hi!\n");	// iteration, 유한한 반복도 포함
	
	i = 1;
	while (--i < 5)			// wrong direction
		printf("Hi!\n");	// iteration, 유한한 반복도 포함

	i = 1;
	while (i < 5)
	{
		printf("i before = %d\n", i);
		i++;
		printf("i after = %d\n", i);
	}

	i = 10;
	while (i++ < 5)
		printf("Hi\n");
	
	i = 0;
	while (i++ < 3);	// null stastement
		printf("%i\n", i);
		i++; // indenting
		// {} 블럭으로 안되어있어서 while밑 1줄만 반복문에 포함됨

	while (scanf("%d", &i) == 1)
		;	// null statemnet


	return (0);
}