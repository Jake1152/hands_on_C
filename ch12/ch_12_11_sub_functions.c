#include <stdio.h>

extern int g_int;    // referencing declaration

void tool(void)
{
    // 밖에서는 사용 못하게 막고싶다면
    // static을 붙여서 막을 수 있따.
    // static을 붙이면 함수가 선언된 파일 내에서만 가능하다.
    // 
    ;
}

// static void fun_second();
// 이렇게해도 밑에 정의부분에서도 된다.
// prototype에 붙이나, 정의부분에서 붙이나 효과는 동일하다.

void fun_second()
{
    extern int g_int;

    g_int += 1;
    printf("g_int in fun() %d %p\n", g_int, &g_int);
}
