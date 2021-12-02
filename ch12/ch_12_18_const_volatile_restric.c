#include <stdio.h>
#include <stdlib.h>
#include <string.h>	// memcpy
#include "ch_12_18_const_volatile_restric.h"

// const double gravity = 9.8;
// const double PI = 3.141592;

int main()
{
	double area_circle = PI * 2.0f * 2.0f;
	/*
		Quailfied types
		conts, volatile, restrict,atomic
	*/

	// C99 ideompotent
	const const const int n = 6; // const int n = 6;
	// type 한정자를 여러개 써도 1개 쓴ㄴ 것으로 인정해준다.
	// 이유는 아래와 같다.

	// typedef에 이미 const가 있고 그 type에 다시 const를 덧붙일때도 정상 작동하도록 함
	typedef const int zip;
	const zip q = 8;	// const const int zip

	const int i;	// NOT initialized!
	// i = 12; // ERROR const이기 때문
	// printf("%d\n", i);// ERROR

	float f1 = 3.14f, f2 = 1.2f;

	const float *pf1 = &f1;
	//*pf1 = 5.0f; // Error
	// indirection을 한 다음에 값을 바꾸는 것은 안된다.
	pf1 = &f2;	// Allowed

	float* const pf2 = &f1;

	*pf2 = 6.0f;
	//pf2 = &f2; //Error 

	const float* const pf3 = &f1;
	// *pf3 = 7.0f;//Error
	// pf3 = &pf2; //Error

	/*
		Global const
	*/

	/*
		volatile
		- Do not optimize
		- (ex: hardward clock)
		- 휘발성
	*/

	volatile int vi = 1;		// volatile location
	volatile int *pvi = &vi;	// points to a vloatile loaction

	int i1 = vi;

	// // ...
	// 값이 나중에 바뀔 수 있다.
	// e.g) 시간
	// 컴파일러가 알수 없는 이유에 의해서 값이 변경 될수 있다.
	// 그러므로 컴파일러보고 최적화히지 말라고 한다.

	int i2 = vi;

	/*
		restrict (__restirc in VS)
		- sole initial means of aceesing a data object
		- compiler can not check this restriction
	*/

	int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *par = ar;

	int *__restrict restar = (int *)malloc(10 * sizeof(int));
	// restrict
	// 동적할당 받은 이 메모리를 다른 포인터에서 접근하지 않겠다는 의미
	// 컴파일러 입장에서는 다른 포인터(주소)를 가리키고 이ㅅ있는게 아니니까 
	// 컴파일러의 최적화를 돕는다.
	// 하지만 프로그래머가 다른 포인터를 가리키지 않게 주의해서 써야한다.
	
	if (restar == NULL)
		exit(EXIT_FAILURE);
	ar[0] += 3;
	par[0] += 5;
	// par[0] += 8;

	restar[0] += 3;
	restar[0] += 5;




	return (0);
}