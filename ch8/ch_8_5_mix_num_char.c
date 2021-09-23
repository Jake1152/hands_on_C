#include <stdio.h>

void display(char ar, int lines, int width);

int main()
{
	char c;
	int rows, cols;

	printf("Input another character and two integers:\n");
	while ((c = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		// buffer claer, scanf에 남은 newline을 제거하기 위함
		while (getchar() != '\n')
			continue;
		display(c, rows, cols);
		printf("Input another character and two integers:\n");
		printf("Press Enter to quit\n");
	}
	return (0);
}
/*
getchar, scanf를 섞어서 입력받아서 깔끔하게 처리해준다.
*/

void display(char ar, int lines, int width)
{
	size_t wid;

	while(lines-- > 0)
	{
		wid = 0;
		while(wid < width)
		{
			putchar(ar);
			wid++;
		}
		putchar('\n');
	}
}

/*
 * 1. 문자 입력
 *  A 3 2
 *  AA
 *  AA
 *  AA
 * 입력된 문자가 width길이 만큼 lines번 반복
*/