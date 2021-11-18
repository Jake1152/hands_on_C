#include <stdio.h>

void temp(register int r)
{
	// pass
}

int main()
{
	register int r;
	r = 123;

	// printf("%p\n", &r);
	int *ptr = &r;

	return 0;
}