#include <stdio.h>


/*
사람은 실수할 수 있으니까 컴파일러를 최대한 활용한다.
const를 이용하여 바뀌면 안될 부분에 대해 처리할 수 있다.
*/

void print_array(const int arr[], const int n)
{
	for (int i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// arr에 값을 새로 추가해주므로 arr을 const로 바꾸면 안된다
void add_value(int arr[], const int n, const int val)
{
	int i;
	for (i = 0; i < n; i++)
		arr[i] += val;
}

// int sum(int ar[], int n)
int sum(const int ar[], const int n)
{
	// 원본을 const를 사용하여 안바뀌게 한다. 미리 방지한다.
	// 
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
		total += ar[i];   // wrong implementation

	return total;
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, 5);
	add_value(arr, 5, 100);
	print_array(arr, 5);

	int s = sum(arr, n);

	printf("sum is %d\n", s);
	print_array(arr, 5);

	return (0);
}
