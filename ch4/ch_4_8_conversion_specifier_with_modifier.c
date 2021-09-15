#include <stdio.h>
#include <limits.h> // INT_MAX, ..., etc

int main()
{
	printf("%10i\n", 1234567);
	// 10자리 출력 남는자리는 빈칸처리
	printf("%-10i\n", 1234567);
	// - 붙이면 빈칸 없이 왼쪽으로 붙여준다.
	printf("%+i, %+i\n", 123, -123);
	// 앞에 sign을 꼭 붙여주어야한다.
	printf("% i \n% i\n", 123, -123);
	// % i 빈칸을 주면 알아서 sign을 처리한다.
	printf("%X\n", 17);
	// 16진수로 변환
	printf("%#X\n", 17);
	// 16진수 변환 및 표기를 해준다 0X
	printf("%05i\n", 17);
	// 남는자리가 0으로 채워진다.
	printf("%*i\n", 7, 456);
	// %*i == %7i, printf에서만 이러며 scanf에서는 다르다.
	// *와 매칭되는 '7'자리는 빈칸으로 표현

	printf("\nPrecisision\n");
	printf("%.3d\n", 1024);
	// 최소숫자 갯수 3, 3보다 큰것은 그냥 출력
	printf("%.5d\n", 1024);
	// 하나 부족해서 0으로 채워진 01024
	printf("%.3f\n", 123456.1234567);
	// 소수점 이하 자리에 대해서 적용된다.
	// 123456.123
	printf("%.3f\n", 123456.1235);
	// 123456.124
	// 반올림된다.
	printf("%10.3f\n", 123.45678);
	// 10 전체 자릿수 및 반올림 소수점 3자리까지
	//    123.457
	printf("%010.3f\n", 123.45678);
	// 빈칸 0으로 채워짐
	// 0000123.457
	printf("%.5s\n", "ABCDEFGHIJKLMN");
	// 글자 갯수를 제한한다.
	// ABCDE
	printf("%.s\n", "ABCDEFGHIJKLMN");
	// .만 넣으면 0이 들어있는 것과 동일
	// 아무것도 안나오고 "%.s\n" 개행만 표현됨

	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);
	printf("%hhd %hd %d\n", 32500, 32500, INT_MAX);
	// vs code에서 쓰는 컴파일러 gcc 에서는 hhd가 2byte이다.
	//  h = 짧다, hhd == char, 	%d
	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);
	// %d overflow, lld long long 
	// x64, x86 결과가 다르다

	return 0;
}