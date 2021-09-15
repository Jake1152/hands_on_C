#include <stdio.h>

// 화면에 출력만 해줄 것이므로 반환값 없음(void)
void say_hello(void);

int main()
{
    printf("Is it okay?\n");
	say_hello();

	return (0);
}

void say_hello(void)
{
	// say_hello 함수에서 printf 함수를 호출하는 형태
	printf("Hi, how are you?\n");
}
