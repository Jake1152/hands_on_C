#include <stdio.h>

int main()
{
	printf("%d\n", 1 + 2);

	int income, salary, bonus;

	income = (salary = (bonus = 100));

	salary = 100;
	bonus = 30;

	income = salary + bonus; // l-value vs r-value

	int takehome, tax;
	tax = 20;
	takehome = income - tax;

	int a,b;
	a = -7;
	b = -a;
	b = +a;	// +does nothing

	1.0f + 2; // ? float가 된다. 하지만 할당이 없어서 무의미

	printf("%d %d", a, b);

	return 0;
}

