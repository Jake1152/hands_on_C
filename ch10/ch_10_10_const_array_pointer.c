#include <stdio.h>

int main()
{
	// type qualifiers: const, volatile, ...
	// qualify 자격을 준다.

	const double PI = 3.14159;
	// double const PI = 3.14159;
	// 양쪽 다 붙일 수 있다.
	// PI = 2.14159; // const라서 재할당 불가
	// 실수로 값을 바꾸면 문제가 되는 곳에 const를 넣어서 만든다.
	// 혹시나 발생할수 있는 실수를 방지한다.
	
	// int arr[5] = {1,2,3,4,5};
	const int arr[5] = {1,2,3,4,5};
	// array의 경우에도 const를 붙이면 각각의 element도 바꿀 수 없다.
	// arr[1] = 123;

	const double arr2[3] = { 1.0, 2.0, 3.0 };
	// arr2[0] = 100.0; // double type의 array 일때도 const도 마찬가지이다.

	// double *pd = arr2;
	const double *pd = arr2;
	// *pd = 3.0;          // pd[0] = 3.0; arr2[0] = 3.0;
	// pd[2] = 1024.0;     // arr2[2] = 1024.0;
		//  const 추가시 위에 *pd, pd[2]는 쓸수없다.
	// arr2가 const이지만 pd의 pointer로 받아오면서 변경이 가능하게 되어버렸다.
	// 왜 이런 일이 발생했는가?
	// 어떻게 방지할 것인가?

	printf("%f %f\n", pd[2], arr2[2]);

	pd++;//allowed

	printf("%f %f\n", pd[2], arr2[2]);

	// pointer 변수에  const를 넣음으로써 할당을 못하게 막아주었지만
	// 증감연산자에 대해서는 뚫린다.
	
	// 막으려면 어떻게해야하는가?
	// const 포인터에 접근할떄는 잘 안막힌다.
	// const double* const pd = arr2;
	// 이렇게 표현하면 막을 수 있다.
	// 
	// * 다음에 const를 넣으면 pointer자체의 주소값을 못 바꾼다.
	// const double* pd = arr2;
	// pointer가 가리키는 곳에 주소값을 못 바꾼다.

	//  double* const pd = arr2;
	// * 다음에 const를 넣으면 pointer자체의 주소값을 못 바꾼다.
	
	return (0);
}