#include <stdio.h>

#define ROWS 3
#define COLS 4

int sum2d_1(int ar[ROWS][COLS]);
int sum2d_2(int ar[][COLS], int row);
// int  sum2d_2(int [][COLS], int row);
// int  sum2d_2(int (*ar)[COLS], int row); // ar is a SILNGE pointer to the array of COLS ints
int sum2d_3(int *ar, int row, int col);
// int sum2d_3(int *, int, int);

int main()
{
	// 배열 메모리를 컴파일할때 정해진다.
	// 이 개념은 동적할당과 연결된다.
	int data[ROWS][COLS] = {
								{1, 2, 3, 4},
								{5, 6, 7, 8},
								{9, 0, 1, 2}
							};
	printf("%d\n", data[2][3]);

	int *ptr = &data[0][0];
	printf("%d\n", *(ptr + 3 + COLS * 2)); // 다차원 배열처럼 쓸 수 있다. 실제로는 데이터는 메모리속에서 1차원이기에 가능.

	printf("Sum of all elements = %d\n", sum2d_1(data));
	printf("Sum of all elements = %d\n", sum2d_2(data, ROWS));
	printf("Sum of all elements = %d\n", sum2d_3(&data[0][0], ROWS, COLS));
	return (0);
}

int sum2d_1(int ar[ROWS][COLS])
{
	int r, c, tot = 0;
	for (r = 0; r < ROWS; r++)
		for (c = 0; c < COLS; c++)
			tot += ar[r][c];
	return tot;
}

int sum2d_2(int ar[][COLS], int row)
{
	int r,c,tot = 0;
	for (r = 0; r < row; r++)
		for (c = 0; c < COLS; c++)
			tot += ar[r][c];
	return tot;
}

// 동적할당할때 사용하는 코드, 높은 차원의 배열을 이렇게 쓸 수 있따.
int sum2d_3(int *ar, int row, int col)
{
	int r,c,tot = 0;
	for (r = 0; r < row; r++)
		for (c = 0; c < col; c++)
			tot += *(ar + c + col * r);     // ar[c + col * r]
	return tot;
}

/*
	In higher dimensions,
	you may omit the value in the left-most bracket

	int my_function(int ar[][3][5][8], int rows);
	int	my_function(int (*ar)[][3][5][8], int rows);
*/