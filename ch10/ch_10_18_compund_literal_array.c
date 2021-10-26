#include <stdio.h>

#define ROWS 3
#define COLS 4

int sum_1d(int arr[], int n);
int sum_2d(int arr[][COLS], int rows);

int main()
{
	int a = 1;
	3;
	3.14f;
	int b[2] = { 3, 4 };
	(int[2]) {3, 4};        // compund literal

	// int c[2] = (int[2]){ 3, 4 }; // error

	int arr1[2] = { 1, 2 };
	int arr2[2][COLS] = { {1,2,3,4}, {5,6,7,8} };

	printf("%d\n", sum_1d(arr1, 2));
	printf("%d\n", sum_2d(arr2, 2));
	printf("\n");

    int *ptr1;
    int (*ptr2)[COLS];

    // 간결하게 사용하는 경우도 있다.
	printf("%d\n", sum_1d((int[2]) {1,2}, 2));
	printf("%d\n", sum_2d((int[2][COLS]) { {1,2,3,4}, {5,6,7,8} }, 2));
    printf("\n");

    ptr1 = (int[2]){1,2};
    ptr2 = (int[2][COLS]){ {1,2,3,4}, {5,6,7,8} };

    printf("%d\n", sum_1d(ptr1, 2));
    printf("%d\n", sum_2d(ptr2, 2));
    printf("\n");
	
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