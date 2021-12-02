#include <stdio.h>
#include "ch_12_11_sub_functions.c"

/*
    Storage Classes and Functions
    - Functions external (by default) ot static
    - A function declration is assumed to be extern
*/

extern int g_int = 123; // defining declaration
// TODO: try Static

// prototype 전방선언
// extern void fun();
// extern void fun_second();
// 모든 함수의 선언은 extern
// 기능하는 함수들을 정리
// 어떤 모듈을 만듦
// func second
void fun();
void fun_second();

int main()
{
    fun();
    fun_second();

    return (0);
}

void fun()
{
    // extern int g_int;
    extern int g_int; //extern 안하면 0    

    g_int += 1;
    printf("g_int in fun() %d %p\n", g_int, &g_int);
}