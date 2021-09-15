#include <stdio.h>
#include <limits.h>
#include <float.h>  // FLT_MAX, ..., etc

int main()
{
	float	n1 = 3.14;
	double	n2 = 1.234;	// 8bytes
	double	n4 = 1.234;	// 8bytes
	int		n3 = 1024;

	printf("%f %f %d\n\n", n1, n2, n3);

	// Note the warinigns in output window
	// printf("%d %d %d\n\n", n1, n2, INT_MAX);			// 4, 4, 4 (N, N, N)
	printf("%d %d %d %d\n\n", n1, n2, n4, INT_MAX + 1);			// 4, 4, 4 (N, N, N)
	// printf("%lld, %lld, %d\n\n", n1, n2, n3);	// 8, 8, 4 (N, N, Y)
	printf("%lld, %lld, %d\n\n", n1, n2, n3);	// 8, 8, 4 (N, N, Y)
	printf("%f %d %d\n\n", n1, n2, n3);			// 8, 4, 4 (Y, N, N)
	printf("%f %lld %d\n\n", n1, n2, n3);		// 8, 8, 4 (Y, N, Y)

	return 0;
}