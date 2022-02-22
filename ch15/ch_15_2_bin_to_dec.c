#include <stdio.h>
#include <math.h>   // pow()
#include <string.h> // strlen()
#include <stdlib.h> // exit()

unsigned char to_decimal(const char bi[]);

int main()
{  
	printf("Binary (string) to Decimal conversion\n");

	printf("%d\n", to_decimal("00000110")); // 1*(2^2) + 1 * (2^1) = 4 + 2 = 6
	printf("%d\n", to_decimal("00010110")); // 1*(2^4) + 1 * (2^2) + 1 * (2^1) = 22

	// Note: ^ (caret) means power in math.
	// Hint: (int)pow(2, 3) == 8

	printf("%d\n", to_decimal("10010100"));

	return 0;
}

unsigned char to_decimal(const char bi[])
{
	const size_t bits = strlen(bi);
	unsigned char sum = 0;
	for (size_t i = 0; i < bits; ++i)
	{
		if (bi[i] == '1')
			sum += (int)pow(2,bits - 1 - i);
		else if (bi[i] != '0')
		{
			printf("Wrong character : %c\n", bi[i]);
			exit(EXIT_FAILURE);
		}
	}
	return sum;
}
/*
mine
unsigned char to_decimal(const char bi[])
{
	size_t			bi_size;
	size_t			power;
	size_t			idx;
	unsigned char	square_num;
	unsigned char	result;

	bi_size = strlen(bi);
	idx = bi_size;
	power = 0;
	result = 0;
	while (idx)
	{
		square_num = pow(2, power);
		printf("square_num : %d\n", square_num);
		printf("bi[idx] : %d\n", bi[idx] - '0');
		result += (bi[idx] - '0') * square_num;
		power++;
		idx--;
		printf("result : %d\n", result);
	}
	return (unsigned char)result;
}
*/
