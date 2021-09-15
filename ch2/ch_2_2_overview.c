// 전처리기
#include <stdio.h>

// main 함수 int형으로 선언
int main(void)
{
    // int형 변수 a,b,c 3개 선언
	int a;
	int b;
	int c;

    // a, b, c value 할당
	a = 1;
	b = 2;
	c = a + b;

    //printf function 사용 
	printf("Result is %i", c);

    // int형 function이었으므로 int형 value return
	return 0;
}