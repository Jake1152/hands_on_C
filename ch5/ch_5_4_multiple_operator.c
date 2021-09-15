#include <stdio.h>

int main()
{
	double seed_money, target_money, annual_interest;

	printf("Input seed money : ");
	scanf("%lf", &seed_money);

	printf("Input target money : ");
	scanf("%lf", &target_money);

	printf("Input annual interest (%%) : ");
	scanf("%lf", &annual_interest);

	double fund = seed_money;
	int year_count = 0;

	while (fund < target_money)
	{
		fund += fund * annual_interest * 0.01;
		year_count++;

		printf("Year %d, fund %f\n", year_count, fund);
	}

	printf("It takes %d years\n", year_count);

	return 0;
}

