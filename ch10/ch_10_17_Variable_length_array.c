#include <stdio.h>

#define ROWS 3
#define COLS 4

int		sum2d_4(int row, int col, int ar[row][col]);

int main()
{
	int n ;
	
	printf("Input array length : ");
	scanf("%d", &n);

	// int n = 7;
	float my_arr[n];
	// (입력 사용)변수로서 변수의 길이를 정할수 있는 방법도 있다.
	// 한번 길이를 정하면 그 다음에 작동하지 않는다.
	// VLA는 많이 쓰지 않는다. 컴파일러에 따라서는 불안정한 경우가 있다.
	// C언어 발전과정에서 쓰였다.
	// 현재는 동적할당으로 처리되므로 잘 쓰지 않는다.
	// 동적할당은 메모리를 재할당
	// 길이가 바뀐 메모리를 다시 받아와서 사용한다.

	for (int i = 0; i < n; ++i)
		my_arr[i] = (float)i;
	
	for (int i = 0; i < n; ++i)
		printf("%f\n", my_arr[i]);

	int data[ROWS][COLS] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,0,1,2}
	};
	printf("%d\n", sum2d_4(ROWS, COLS, data));
	

	return (0);
}

int		sum2d_4(int row, int col, int ar[row][col])
{
	int r,c,tot = 0;
	for (r = 0; r < row; r++)
		for (c = 0; c < col; c++)
			tot += ar[r][c];     // ar[c + col * r]
	return tot;
}
