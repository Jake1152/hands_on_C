#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
	// round -off errors (ex1)
	// float a, b;
	// a = 1000.0f + 1.0f;
	// a = 1.0E20 + 1.0f;
	// b = a - 1.0E20f;
	// printf("%f\n", b);

	// round-off erros (ex2)
	// float a = 0.0f;
	// int cnt = 100;
	// while (cnt--)
	// 	a = a + 0.01f;
	// printf("%f\n", a);
	// overflow
	// float number에서 보장해주는 유효숫자 갯수는 6개
	// float max =  3.402823466e+38F;
	// double max =  3.402823466e+38F;
	// double max =  1.7976931348623158e+308;
	// printf("%f\n", max);
	// max = max * 100.0f;
	// printf("%f\n", max);

	// underflow
	// float f = 1.401298464e-45F;
	// printf("%e\n", f);
	// f = f / 2.0f;	// subnormal
	// printf("%e\n", f);

	// divied zero
	// float f = 104.0f;
	// printf("%f\n", f);
	// f = f / 0.0f;
	// printf("%f\n", f);

	float f = asinf(1.0f);
	printf("%f\n", f);

	f = asinf(2.0f);
	printf("%f\n", f);

	return 0;


}