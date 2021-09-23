#include <stdio.h>

long	get_long(void);

int main()
{
	printf("Please input a interger bewteen 1 and 100.\n");

	long number;

	while(1)
	{
		number = get_long();
		if (number > 1 && number < 100)
		{
			printf("Ok. Thank you\n");
			break ;
		}
		else
			printf("Wrong input. Pleas try again.\n");

	}
	printf("Yout input %ld is between 1 and 100. Thank you.\n", number);

	return (0);
}

long	get_long(void)
{
	long	input;
	char	c;

	while (scanf("%ld", &input) != 1) //long decimal이어야지 1개로 나옴 다른 타입이면 0
	{
		printf("Your input - ");

		// 사용자 입력이 버퍼에 남게 된다.
		while ((c = getchar()) != '\n')
			putchar(c); // input left in buffer

		printf(" - is not an integer. Please try again. \n");
	}
	printf("Your input %ld is an interger. Thank you.\n", input);
	return (input);
}


/*
 * 입력한 데이터가 알맞게 들어왔는지 확인해주는 작업
 * 경우수가 다양
 * 간단한 경우에 대해 진행
 * 복잡한 경우는 고민하여 적용
 * 사용자에게 정수 1개 입력하고 출력
 * 숫자가 큰 정수가 들어오는 경우
 * long decimal로 선언
 * scanf함수의 반환값
 * 제대로 입력받은 숫자의 갯수
 * long type에 맞는 숫자가 1개가 들어와야 정상
 * 아니면 그에 맞지 않은 갯수 (원하지 않는 data type)
 * scanf가 제대로 입력 받지 못했을때
 * getchar, putchar를 이용하여 buffer를 비운다.
 * long은 최소 32bit
 * long long 은 최소 64bit
*/