#include <stdio.h>

int main()
{
	/* Pointer Compatiblilty */
	int n = 5;
	double x;
	x = n; // no error integer를 double에 넣어주는 것은 가능 promotion이라고 생각
	int *p1 = &n;
	double *pd = &x;
	// pd = (double)p1;	// Warning
	// pd = p1;	// Warning

	int *pt;		// 그냥 포인터
	int	(*pa)[3];	// 3개짜리 원소에 대한 포인터
	int	ar1[2][3] = { 3, };
	int ar2[3][2] = { 7, };
	int **p2;		// a pointer to a pointer

	pt = &ar1[0][0]; // pointer-to-int

	// 1차원 배열로 다차원 배열의 원소에 전부 접근할 수 있다.
	// 메모리 구조가 그렇게되어 있기에 가능하다.
	// pointer만 가지고는 원소의 갯수를 알 수 없다.
	for (int i = 0; i < 6; ++i)
		// printf("%d", *(pt+i));
		// printf("%d", pt[i]);

	pt = ar1[0];	// pointer-to-int
	// pt = ar1;
	pa = ar1;		// pointer-to-int[3]
	// 초보자가 코드를 읽을것이라는 가정으로 코딩한다.
	// pa = ar2;	// Warning or error
	p2 = &pt;		// pointer-to-int *
	*p2 = ar2[0];	// pointer-to-int
	//p2 = ar2;		// Warning (Error)
	// Notes
	// - p2: pointer to pointer to int
	// - ar2: a Pointer to array-of-2-ints

	/* Pointer and const */

	// int x = 20;
	// const int y = 23;
	// int *p1 = &x;
	// const int *p2 = &y;
	// const int **pp2 = &p1;
	// // const int const **pp2 = &p1; // pointer 바꾸는것 가드 가능
	// // p1 = p2;	// Warning (Error)

	// // *p2 = 123; // Error
	// p2 = p1;

	// int x2 = 30;
	// int *p3 = &x2;
	// *pp2 = p3;
	// pp2 = &p1;

	{ 
		const int	**pp2;
		int			*p1;
		const int	n = 13;
		pp2 = &p1;	// const?
		*pp2 = &n;	// sets p1 to point at n
		*p1 = 10;	// change n
		// 컴파일러가 허용하던 안하던 이런 상황은 만들지 않는다.
		// 이럴거면 애초에 const를 붙이지 않았어야한다.
	}

	/* C const and C++ const */
	// C++은 억제
	// C는 프로그래머를 믿기에 이러는 것?
	{
		const int	y;
		const int	*p2 = &y;
		int			*p1;

		p1 = p2; // warning (error in cpp)
	}

	return (0);
}