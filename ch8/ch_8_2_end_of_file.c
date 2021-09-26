#include <stdio.h>

int main()
{
	int c;

	// while ((c = getchar()) != EOF)	// End Of file
	// 	putchar(c);

	while (1)
	{
		c = getchar();
		printf("%d\n", c);
		if (c == EOF)
			break;
	}

	return (0);
}
