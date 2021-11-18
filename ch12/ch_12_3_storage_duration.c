#include <stdio.h>

/*
	Stoage duration:
	- static storage duration
	(Note: 'static' keyword indicate the linkage type, not the storage duration)
	- autumatic storage duration
	- alloacted storage duration
	- thred storage duration
*/

void count()
{
	int ct = 0;
	printf("count = %d\n", ct);
	ct++;
}

void static_count()
{
	static int ct = 0;
	// program이 끝날때까지 유지된다.
	printf("static count = %d\n", ct);
	ct++;
}

int main()
{
	count();
	count();
	static_count();
	static_count();

	return (0);
}