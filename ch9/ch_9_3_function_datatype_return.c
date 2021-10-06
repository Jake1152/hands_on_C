#include <stdio.h>

int	int_min(int, int);
//int_min(int i, int j);
// 정수형 반환 자료형은 적지않아도 에러나지 않는다.
// 그 말은 data type이 없는 경우 기본값으로 정수형으로 처리된다.

int main()
{
	int i1, i2;

	while (1)
	{
		printf("Input two integers : ");

		if (scanf("%d %d", &i1, &i2) != 2)
			break;
		int lesser = int_min(i1, i2);
		// int lesser = min;		
		printf("The lesser of %d and %d is %d\n", i1, i2, lesser);

		// printf("The lesser of %d and %d is %d\n", i1. i2, int_min(i1, i2));
	}
	printf("End.\n");

	return (0);
}

int	int_min(int i, int j)
{
	int min; // int_min 함수 안에서만 살아있는 변수
	// local variable

	if (i < j)
		min = i;
	else
		min = j;

	return (float)min;// warning발생, 반환자료형이라 다르기 때문.
	// return min;// 돌려보낼때는 값으로 보낸다.

	/*
	if (i < j)	// flow control
		return i;
	else
		return j;

	printf("ERROR?\n");
	exit(1);
	
	//return; // return with no value
	//
	*/
}