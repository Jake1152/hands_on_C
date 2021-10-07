#include <stdio.h>
#include <stdlib.h>

/*
	10
	10 / 2 = 5, remainder = 0
	5 / 2 = 2, remainder = 1
	2 / 2 = 1, remainder = 0
	1 / 2 = 0, remainder = 1
*/

void print_binary(unsigned long n);
void print_binary_loop(unsigned long n);

int main()
{
	unsigned long num = 10;

	print_binary_loop(num);
	// print_binary(num);

	printf("\n");

	return (0);
}


void	print_binary(unsigned long n)
{
	if (n == 0)
		return ;	
	print_binary((int)(n / 2));
	printf("%ld", n % 2);	
}


// doest not work 
void	print_binary_loop(unsigned long n)
{
	size_t			digits;
	char			*bin_num;
	unsigned long	tmp;	

	digits = 1;
	tmp = n;
	while (tmp)
	{
		tmp = (unsigned long)(tmp / 2);
		digits++;
	}
	bin_num = (char *)malloc(sizeof(char) * digits);
	if (!bin_num)
		return ;
	printf("digits %zu\n", digits);
	bin_num[digits] = '\0';
	digits--;
	while (n > 0)
	{
		// 이 부분에서 무언가 꼬인것으로 판단.
		bin_num[digits] = n % 2 + '0';
		n /= 2;
		digits--;
	}
	printf("bin_num %s\n", bin_num);
	printf("digits %zu\n", digits);
	while (bin_num[digits] != '\0')
	{
		putchar(bin_num[digits]);
		// printf("%c", bin_num[digits]);
		digits++;
	}
	
	return ;
}


/* 강의 예시코드

void	print_binary(unsigned long num)
{
	int remainder = num % 2;
	if (num >= 2)
		print_binary(num / 2);	
	
	printf("%d", remainder);
}

// does not work
void	print_binary_loop(unsigned long num)
{
	while (1)
	{
		int quotient = num / 2;
		int remainder = num % 2;

		printf("%d", remainder); // remainder is 0 or 1
		num = quotient;
		//순서가 반대로 된다
		//배열을 이용해서 처리한다.

		if (num == 0)
			break;
	}
	printf("\n");
}

*/