#include <stdio.h>

int main()
{
	printf("%u\n", sizeof(float));
	printf("%u\n", sizeof(double));
	// long double은 최소한 double만큼의 사이즈만 되어도 된다.
	// 영상에서는 12byte이지만 11AUG21 GCC버젼에서는 16byte이다.
	printf("%u\n", sizeof(long double));

	// float type은 literal f를 붙여줘야한다.
	float f = 123.456f;
	// literal 입장에서 double이 기본값
	double d = 123.456;
	
	// 8 byte double을 4byte로 넣으면 저장할때 값이 잘릴 수 있다.
	float f2 = 123.456f;
	double d2 = 123.456f;
	
	int i = 3;
	float f3 = 3.f;	// 3.0f  literal float로 됨
	double d3 = 3.;	// 3.0

	float f4 = 1.234e10f;

	// float f5 = 0xb.1p1;
	float f5 = 0xb.ap1;
	// 1/16
	double d5 = 1.0625e0;

	printf("%f  %F %e %E\n", f, f, f, f);
	printf("%f  %F %e %E\n", d, d, d, d);
	printf("%a %A\n", f5, f5);
	printf("%a %A\n", d5, d5);

	return 0;
}