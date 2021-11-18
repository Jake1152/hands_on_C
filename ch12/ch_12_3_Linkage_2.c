#include <stdio.h>

extern int el;
// extern int il;

void testLinkages(int hello, double world)
{
	printf("DoSomething called\n");
	printf("%d\n", el);
	// printf("%d\n", il);
	// printf("%d", dodgers);

	el++;
}
