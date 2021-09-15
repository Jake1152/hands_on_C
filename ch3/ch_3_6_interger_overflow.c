#include <stdio.h>
#include <limits.h>
// #include <stdlib.h>

/* *************************************** 
int	main()
{
	 /* unsigned int가 가질 수 있는 최대 길이 32bit*/
	 /*
	unsigned int i = 0b11111111111111111111111111111111;

	
	printf("%u\n", sizeof(unsigned int));
	printf("%u", sizeof(i));

	return (0);
}


int main()
{
	unsigned int u_max = UINT_MAX; // <limits.h> include 함으로써 사용 가능
	unsigned int u_min = 0;
	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN;

	printf("%u\n", u_max);
	printf("%u\n", u_min);
	printf("%d\n", u_max);
	printf("%d\n", u_min);
	printf("%d\n", i_max);
	printf("%d\n", i_min);

	//// i to binary represation
	// char buffer[33];
	// _itoa(i, buffer, 2);
	//// print decimal and binary
	//printf("decimal: %u\n", i);
	//printf("decimal: %s\n", buffer);

	

	return 0;
}

*************************************** */


int main()
{
	unsigned int u_max = 0 - 1; // <limits.h> include 함으로써 사용 가능

	// i to binary representation
	char buffer[33];
	_itoa(u_max, buffer, 2);	

	// print decimal and binary
	printf("decimal: %u\n", u_max);
	printf("decimal: %s\n", buffer);

	return 0;
}