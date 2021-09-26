#include <stdio.h>

int main()
{
	int num;
	int sum;
	int status;

	sum = 0;
	printf("Enter an integer (q to quit) : ");
	while (scanf("%d", &num) == 1)		// equality operator
	{
		printf("Enter an integer (q to quit) : ");		
		// scanf의 반환값 입력받은 변수의 갯수를 return 값으로 돌려준다.
		// 정상적으로 정수 입력시  변수 1개만 입력이라 status에 1이라는 값이 저장된다.
		// 문자를 입력한 경우 정수로 입력받을수 없기에 입력받은 변수의 갯수가 0이 된다.
		// 종료를 하고 지금까지 더한 값을 출력할지 결정할 수 있다.
		sum += num;
	}
	printf("Sum = %d\n", sum);

	// TODO C-style shortcut
	// 가급적 간결하고 반복적인 작업이 2군데 이상 있는 것은 안좋다.

	return (0);
}
