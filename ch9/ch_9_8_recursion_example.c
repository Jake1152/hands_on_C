#include <stdio.h>

/*
	loop vs recursion
	factorial : 3! = 3 * 2 * 1, 0! = 1
	5! = 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1! = 5 * 4 * 3 * 2 * 1 * 0!  

*/

long long	loop_factorial(int n);
long long	recursive_factorial(int n);

int main()
{
	int num = 12;

	printf("%lld\n", loop_factorial(num));
	printf("%lld\n", recursive_factorial(num));

	return (0);
}

long long	loop_factorial(int n)
{
	long	mul = 1;

	while (n)
	{
		mul *= n;
		n--;
	}
	return (mul);
}


long long	recursive_factorial(int n)
{
	if (n <= 0)
		return (1);
	return (n * recursive_factorial(n - 1));
}