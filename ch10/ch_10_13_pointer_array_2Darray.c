#include <stdio.h>

int main()
{
	/* Tow of 1D arrays */
	// int arr0[3] = { 1, 2, 3 };
	// int arr1[3] = { 4, 5, 6};
	// 배열의 주소

	// int *parr[2] = { arr0, arr1 }; // an array of pointers
	// (int*) parr[2] = { arr0, arr1 }; // 이렇게 생각하면 이해가 더 쉽다.
	// 2차원 배열
	// int *parr[2] 포인터가 담길수 있는 배열
	// int **parr, int *parr[]의 차이
		// array이면 처음 위치를 변경할수 없는가?
	// arr0을 &arr[0]이라고 표현하지 않고 배열의 주소인것처럼 쓸수있다고 하였다.
	// 둘의 차이는 무엇인가?
	/* 배열과 포인터의 구체적인 차이 (생각)
	 * 1. 배열은 처음에 사이즈를 정해야한다. 예외는 arr[]같이 할때 하지만 값을 넣을때 메모리 공간의 크기가 고정된다.
	 * 2. 기억에 배열의 첫번째 위치 주소는 변경할 수 없다.
	 *    하지만 포인터는 가리키는 주소를 변경할 수 있다.
	*/

	// 2차원 배열이어도 실제로 메모리에서는 1차원이다.
	// for (int j = 0; j < 2; ++j)
	// {
	// 	// 배열과 포인터가 호환될 수 있다 하지만 동적할당에서 주의할 부분이 있다.
	// 	// 마치 2차원 배열인것처럼 사용하고 있다.
	// 	for (int i = 0; i < 3; ++i)
	// 		printf("%d(==%d, %d) ", parr[j][i], *(parr[j] + i), (*(parr + j))[i]);
	// 	printf("\n");
	// }
	// printf("\n");

	/* 2D arrays are arrays of 1D arrays */
	// int arr[2][3] = { {1,2,3}, {4,5,6} };

	// int *parr0 = arr[0];
	// int *parr1 = arr[1];

	// for (int i = 0; i < 3; ++i)
	// 	printf("%d ", parr0[i]);
	// printf("\n");

	// for (int i = 0; i < 3; ++i)
	// 	printf("%d ", parr1[i]);
	// printf("\n");

	/* arrays of pointers works like a 2D array */
	// int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	// int *parr[2] = { arr[0], arr[1] };
	// // int *parr[2];
	// parr[0] = arr[0];
	// parr[1] = arr[1];

	// for (int j = 0; j < 2; ++j)
	// {
	// 	for (int i = 0; i < 3; ++i)
	// 		printf("%d %d %d %d\n", 
	// 				arr[j][i], parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
	// 	printf("\n");
	// }
	// printf("\n");

	/*
	Notes
	- parr[0] and parr[1] do not point valid memory by default
	- &parr[0] != &arr[0]
	- &parr[0] != parr[0] but &arr[0] == arr[0]
	*/

	// printf("%p\n", &parr[0]);	// different!
	// printf("%p\n", parr[0]);
	// printf("%p\n", arr);
	// printf("%p\n", &arr[0]);	// address of array name is equal to the address of the first 
	// printf("%p\n", arr[0]);
	// printf("%p\n", &arr[0][0]);
	// printf("\n");

	/* Array of string of diverse lengths exaple */
	// 2차원 배열, 중요한 사례 문자열
	// (char *)name[], A J M G 가 저장된 위치를 가지고 있다, 즉 문자열의 시작 위치를 가짐
	char *name[] = {"Aladdin", "Jasmine", "Magic Carpet", "Genie"};
	
	const int n = sizeof(name) / sizeof(char *);

	for (int i = 0; i < n; ++i)
		printf("%s at %u\n", name[i], (unsigned)name[i]); // Use ull in x64 build
	printf("\n");

	char aname[][15] = { "Aladdin", "Jasmin", "Magic Carpet", "Genie", "Jafar"};

	const int an = sizeof(aname) / sizeof(char[15]);

	for (int i = 0; i < an; ++i)
		printf("%s at %u\n", aname[i], (unsigned) &aname[i]);
	printf("\n");

	return (0);
}