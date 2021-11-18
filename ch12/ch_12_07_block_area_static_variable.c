#include <stdio.h>


void count()
{
    int cnt = 0;
    printf("count = %d %lld\n", cnt, (long long)&cnt);
    cnt++;

    // return (cnt);
}


void count_caller()
{
    count();
}


void static_count()
{
    static int cnt = 0;     // initializaed only once!
    // cnt = 0;    // 위에라 문법적으로 다르다.
    // static은 처음에만 초기화 되고 이후에는 대입이다
    printf("static count = %d %lld\n", cnt, (long long)&cnt);
    cnt++;
}

void static_count_caller()
{
    static_count();
}

int main()
{
    count();
    count();
    count_caller();

    static_count();
    static_count();
    static_count_caller();

    return (0);
}
