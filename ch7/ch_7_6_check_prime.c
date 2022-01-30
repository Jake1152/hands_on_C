#include <stdio.h>

int main()
{
	size_t num;
	printf("Input your number : ");

	while (scanf("%u", &num) != 0)
	{
        size_t  isPrime = 1;
        for (size_t i = 2; i < num; ++i)
        {
            if ((num % i) == 0)
            {
                isPrime = 0;
                break ;
            }
        }
	}
}