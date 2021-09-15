#include <stdio.h>
#include <inttypes.h>	// intmax_t

int main()
{
	/* multiple inputs blank separators */
	// int		i;
	// float	f;
	// char	str[30];
	// scanf("%d %f %s", &i, &f, str);	// Note % is absent in front of str
	// 초과되는 입력에 대해서는 buffer에서 담고 있다가 
	// 프로그램이 종료되면 사라진다.
	// 기본적으로 ' '빈칸이 있으면 끊어서 읽는다.
	// 해당 데이터 타입과 다른 것이 들어오면 끊는다.
	// printf("%d %f %s\n", i, f, str);

	/* character */
	// char c;
	// scanf("%c", &c);	// try blank
	// printf("%i\n", c);	// blank is 32
	// 문자는 빈칸도 입력 받는다.

	/* Unsigned as signed*/
	// unsigned i;
	// scanf("%i", &i);
	// printf("%i\n", i);
	// i는 unsigned이지만 formating이 signed이므로 signed로 해석된다.
	// 원하지 않는 결과, error를 만들 수 있다.
	// 주의!

	/* Unsigned as unsigned*/
	// unsigned i;
	// scanf("%u", &i);	// 음수 시도해볼것.
	// printf("%u\n", i);

	/* floatubg point numbers */
	// l for double for %f, %e, %E, %g
	// double d = 0.0;
	// float d = 0.0;
	// scanf("%lf", &d);	// lf, try E
	// scanf("%f", &d);	// float일때 사용
	// scientific notation 사용 가능
	// double이고 
	// scanf("%lf", &d);
	/*
	3.14
	3.14000
	*/
	// printf("%f\n", d);

	/* Width */
	// char str[30];
	// scanf("%5s", str);
	// 입력은 5자리 넘어서도 되지만
	// %뒤에 넣은 5개 까지만 메모리 공간에 저장됨
	// printf("%s\n", str);

	/* h modifier */
	// char i;
	// scanf("%hhd", &i);	// try large numbers
	// printf("%i\n", i);
	// char -128~127

	/* interger with characters */
	// int i;
	// scanf("%i", &i);	// try '123ab', '123a456'
	// printf("%i\n", i);
	// 문자에서 끊김 숫자까지만 입력됨
	// 문자만 넣으면 0

	/* j modifier */
	// intmax_t i;
	// scanf("%ji", &i);
	// printf("%ji", i);
	// portble이라는 차이만 있다.

	/* Regular characters */
	// int a, b;
	// scanf("%d %d", &a, &b);	// try blank separator only
	// printf("%d ,%d\n", a, b);
	// printf("%d, %d\n", a, b);
	// printf("%d,%d\n", a, b);
	// printf("%d-%d\n", a, b);
	// scanf("%dA%d", &a, &b);
	// printf("%d %d\n", a, b);
	// 정규식, 문자열 규칙에 맞게 입력받음
	
	/* char receives blank */
	// int a, b;
	// char c;
	// scanf("%d%c%d", &a, &c, &b);
	// printf("%d|%c|%d", a, c, b);
	// c부분에 문자 입력

	/* return value of scanf() */
	// int i = 123;
	// int width = 5;
	// printf("Input width : ");
	// scanf("%d", &width);
	// printf("%*d\n", width, i);
	// Input width : 5
  	//  123
	// width의 남는 갯수는 공백으로 표현

	/* modeifier for scanf() */
	int i;
	scanf("%*d%*d%d", &i);
	printf("your third input = %d", i);
	// 123 456 78
	// your third input = 78
	// 마지막 것만 나온다

	return 0;
}