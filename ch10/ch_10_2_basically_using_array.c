#include <stdio.h>

#define MONTHS 12   // symbolic constant, macro

int main()
{
	/* Basic usage */
	int high[MONTHS] = { 2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 12 , 4};

	// for (int i = 0; i < MONTHS; ++i)
	// 	printf("%d ", high[i]); // bracket 안에 첨자를 넣어서 사용
	// for문으로 데이터 처리하기 좋다
	// index는 0부터시작 12개월이므러 0~11까지 12개가 돌아야한다.
	// printf("\n");

	// float avg = 0.0;
	// 평균을 만드는 예제
	// for (int i = 0; i < MONTHS; ++i)
	// 	avg += high[i];
	// printf("Average = %f\n", avg / (float)MONTHS);

	// 선언이 끝나면 여러개를 한번에 넣는게 안된다.
	// 선언과 동시에 초기화할때만 가능
	// 선언 이후에는 하나하나 해줘야하서 보통 반복문을 사용하여 처리한다.
	// high[0] = 1;
	// high[1] = 2;    
	// high = { 1, 2, 3,4,5,6,7,8,9,10,11}; // Not working
	// high[12] = { 1, 2, 3,4,5,6,7,8,9,10,11}; // Not working

	/* Addresses */
	// printf("%p %p\n", high, &high[0]);
	// // 첫번째 요소가 배열의 시작 주소이다.
	// // 혹은 포인터
	// for (int i = 0; i < MONTHS; ++i)
	// 	printf("%lld\n", (long long)&high[i]);
	// 	// 10진수 정수로 변환하기 위해 long long으로 하고 있다.
	// printf("\n");

	/* Compiler doesn't check whether indices are valid. */
	// printf("high array size: %d\n", sizeof(high));
	// high[12] = 4; //Error
	// high[-1] = 123; //Error
	// printf("after indexing error code\n");
	// printf("high[12] %d\n", high[12]);
	// printf("high[-1] %d\n", high[-1]);
	// printf("high array size : %d\n", sizeof(high));
	// 사실 밑에 것은 왜 error처리하는지 모르겠다.
	// C의 특징? python에서는 [-1]로 하여도 가능하다. 어떻게 가능한가?
	// [-1] == [size(str)-1]

	/* const and array */
	// int const temp = 0;
	// const int temp = 0;
	// temp = 4; // const이기에 변경불가
	// array일때도 const로 선언하면 당연하게 변경 불가능하다.
	// const int low[12] = { -7, -5, 1, 7, 13, 18, 22, 22, 16, 9, 2, -5 };
	// low[0] = 123;

	/* When array */
	// int not_init[4];	// TODO: try static
	// for (int i = 0; i < 4; ++i)
	// 	printf("%d\n", not_init[i]);
	// 초기화되지 않은 배열에 출력하고자 한다.
	// C언어 컴파일러에서는 문제 발생시키지 않는다.
	// 효율성의 문제, 프로그래머에게 더 권한을 준다.
	// static int not_init[4];	// TODO: try static (storage class)
	// for (int i = 0; i < 4; ++i)
	// 	printf("%d\n", not_init[i]);
	// static에서는 알아서 0으로 초기화가 된다

	/* Partially initialized */
	// 부분적으로 초기화하면 나머지도 알아서 초기화해준다.
	// int insuff[4] = { 2, 4 };
	// for (int i = 0; i < 4; ++i)
	// 	printf("%d\n", insuff[i]);
	
	/* Overlly initialized */
	// int over[2] = { 2, 4, 8, 16 };
	// 	for (int i = 0; i < 4; ++i)
	// 		printf("over %d\n", over[i]);

	/* Omitting size */
	// const int power_of_twos[] = { 1, 2, 4, 8, 16, 32, 64};
	// printf("%d\n", sizeof(power_of_twos));	// power_of_twos == power_of_twos[0] 였던거 같은데 왜 길이가 다른가?
	// // dynamic allocation에서는 길이 세는 것이 안된다.
	// printf("%d\n", sizeof(int));
	// printf("%d\n", sizeof(power_of_twos[0]));
	
	// // power_of_twos array의 길이를 알수없으므로 sizeof연산자를 이용해서 길이를 파악한다.
	// // 전체길이와 data type의 길이를 이용해서 나누면 알수있기 때문에 그렇다.
	// int threthold = (sizeof(power_of_twos) / sizeof(power_of_twos[0]));
	// for (int i = 0; i < threthold; ++i)
	// 	printf("%d ", power_of_twos[i]);

	/* Designated initializaers */
	// 초기화되는 값을 모두 지정하는 것이 아니라 일부 위치만 지정해서 초기화 할수도 있다.
	// int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29 };
	// for (int i = 0; i < MONTHS; ++i)
	// 	printf("%d ", days[i]);
	
	/* Specifyinh Array sizes */
	int arr1[MONTHS];	// Symbolic integer constant , 양의 정수만 가능 0도 안된다.
	double arr2[123];	// Literal integer constan , 
	float arr3[3*4 + 1];	// float arr3[13]
	float arr4[sizeof(int) + 1];	//
	// float arr5[-10]; // No
	// float arr6[0]; 	// No
	// float arr7[1.5];	// No
	float arr8[(int)1.5];	// Yes

	int n = 8;
	float arr9[n];	// Variable-Length Array is optional from C11
	//  C99에서는 필수였지만 C11에서는 선택사항
	int n = 5;
	float arr[n];

	for (int i = 0; i < n; ++i)
		arr[i] = (float)i;

	return (0);
}
