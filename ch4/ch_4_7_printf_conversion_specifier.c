#include <stdio.h>
#include <limits.h> // INT_MAX, ..., etc
#include <float.h>  // FLT_MAX, ..., etc

#define PI 3.141592  // manifest constants, symbolic constants

int main()
{
	double d = 3.141592653589793238462643383279;

	printf("%c\n", 'A');
	printf("%s", "I love you\n");
	printf("Even if there's small chance, \
we owe this to evneryone who's not in this room to try.\n");

	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX); // Note overflow
	// UINT_MAX는 %i로는 표현 불가 범위가 넘어선다.
	printf("%u %u %u\n", 1024, -1, UINT_MAX);  // Note overflow
	// %u는 부호가 없으므로 -1의 경우 overflow 발생 해당 바이트에서 최댓값이 된다.

	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d);	// 1 in %lf is ignored
	// 절삭 발생, lf는 무시된 이유는 
	// 전통적인 이유로 printf 내부에서 double로 바꾼다고 한다.
	// 그래서 l이 무시된다.
	// scanf에선 l을 붙여줘야한다.
	printf("%a %A\n", d, d);
	printf("%e %E\n", d, d);
	
	printf("\n");
	printf("%g %g\n", 123456.789, 1234567.89);
	//%g
	//부동소수점 수 값에 따라서  %e, %f  사용
	printf("%G %G\n", 123456.789, 1234567.89);
	printf("%g %g\n", 0.00012345, 0.000012345);
	printf("%G %G\n", 0.00012345, 0.000012345);
	// 10진수 부동소수점 표현

	printf("\n");
	printf("%o\n", 9);
	// 8진수 표현
	printf("%p\n", &d);	//pointer-of operator

	printf("\n");
	printf("%x %X\n", 11, 11);
	printf("%%\n", d);	// Note the waring/ d is ignored

	printf("\n");
	printf("%9d\n", 12345);
	printf("%09d\n", 12345);
	printf("%.2f\n", 3.141592);
	printf("%.20f %.20lf\n", d, d);

	printf("\n");
	int n_printed = printf("Counting!");
	printf("%u\n", n_printed);

	return 0;
}