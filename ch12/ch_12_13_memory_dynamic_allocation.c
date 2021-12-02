#include <stdio.h>
#include <stdlib.h> // malloc(), free()

int main()
{
	float x;
	char str[] = "DANCE MONKEY";

	int arr[100]; // stack에 저장

	/*
		malloc() returns a void type pointer.
		void* : generic pointer
		malloc이 void라서 명확하게 하기 위해 캐스팅을 해서 변수에 담아준다

		free() deallocates the memory
	*/
	double *ptr = NULL;
	
	ptr = (double *)malloc(30 * sizeof(double));
	// size_t; malloc할때 파라미터 값으로 size_t type으로 넘어감

	if (ptr == NULL)
	{
		puts("Memory allocation failed.");
		/*
			exit(EXIT_FAILURE) is similar to return 1 IN main()/
			exit(EXIT_SUCCESS) is similar to return 0 IN main()
		*/
		exit(EXIT_FAILURE);
		// 메모리 할당이 안되면 더이상 안돌아가서 대체로 종료하기도한다.
		// 서버같이 계속 돌아야한다면 에러 문구 발생시키고 어떻게 처리할지 대기한다.
	}

	printf("Before free %p\n", ptr);

	free(ptr);

	printf("After free %p\n", ptr);

	ptr = NULL;	// optionial

	/* Dynamically Allocated Array */

	int n = 5;
	ptr = (double *)malloc(n * sizeof(double));

	if (ptr != NULL)	
	{
		for (int i = 0; i < n; ++i)
			printf("%f", ptr[i]);
		printf("\n");

		for (int i = 0; i < n; ++i)
			printf("%f ", ptr[i]);
		printf("\n");
	}
	free(ptr);
	ptr = NULL;

	/*
		Comparision to VariableLengthArray

		VLA
		- not supported by VS compilers.
		- automatic duration, cannot be resized
		- limited by stack size (when compiler places VLA in stacj segment)
	*/

	return (0);
}