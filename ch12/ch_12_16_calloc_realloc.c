#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 10;

	int *ptr = NULL;

	// ptr 
	ptr = (int *)malloc(sizeof(ptr));
	// contiguous allocation
	if (ptr == NULL)
		exit(1);
	
	for (int i = 0; i < n; ++i)
		printf("%d ", ptr[i]);
	printf("\n");

	for (int i = 0; i < n; ++i)
		printf("%d ", ptr[i]);
	printf("\n");

	/*
		realloc*( KNK p422)
		- does not initailize the bytes added
		- return NULL if can not enlarge the memoty block
		- If first argument is NULL, it behaves like malloc()
		- If second argument is 0, it frees the memoty block.
	*/

	for (int i = 0; i < n; ++i)
		ptr[i] = i + 1;

	n = 20;

	int	*ptr2 = NULL;
	ptr2 = (int *)realloc(ptr, n * sizeof(ptr));
	// ptr = (int *)realloc(ptr, n * sizeof(int));

	printf("%p %p\n", ptr, ptr2);

	printf("%d\n", ptr[0]);

	if (ptr2 == NULL)
		exit(EXIT_FAILURE);
	else
		ptr = NULL;	

	for (int i = 0; i < n; ++i)
		printf("%d ", ptr2[i]);
	// realloc function은 남는 공간은 쓰레기 값으로 놔둔다.
	// calloc의 경우 0으로 초기화
	// malloc 쓰레기 값으로 놔둠

	return (0);
}