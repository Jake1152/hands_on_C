#include <stdio.h>


extern int	g_int;

void temp()
{
	g_int += 1000;
	// block scoped에서는 수정 불가
	// 상단 file scope에서 수정가능
	// 하지만 전역변수이므로 같이 쓰는 다른 파일에서 초기화되지 말아있어야한다.
}

void fun_sec()
{
	temp();

	extern int g_int;

	g_int += 7;
	printf("g_int in fun_sec() %d %p\n", g_int, &g_int);	

}
