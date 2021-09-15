// 전처리기로 stdio.h include하면 링커가 printf가 구현된 부분을 합쳐서 exe파일에 넣어준다.
#include <stdio.h>

int main()
{
	int x, y, z;

	x = 1;
	y = 4;

	z = x + y;

	// printf("The answer is 1 + 4");
	printf("The answer is %i\n", 1+2);
	printf("%i + %i = %i\n", x, y, z);

	return (0);
}


// int main()
// {
//     printf("The truth is ... ");
//     printf("I am Ironman.\n");
// 		// printf가 2개여도 첫번쨰 printf에 \n이 없으므로 결과가 1줄에 나온다

//     return 0;
// }