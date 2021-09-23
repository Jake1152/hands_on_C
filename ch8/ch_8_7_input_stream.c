#include <stdio.h>

int main()
{
    /*
        Assume that yout input is :
        Hello 123 3.14
    */

    char    str[255];
    int     i, i_2;
    double  d;

    // 다음 기준이 개행인 이유는 한줄에 작성하더라도 나중에 지울수 있으므로 엔터를 치기 전에는 수정 가능ㅎ다.
    scanf("%s %d %lf", str, &i, &d);
    printf("%s %d %f\n", str, i, d);
    // 포맷팅이 %f인 이유?

    // or (see the difference)

    scanf("%s %d %d", str, &i, &i_2); // formating, 받는 variable도 정수이다. 그러므로 실수가 들어오면 제대로 안된다.
    printf("%s %d %d\n", str, i, i_2);

    // or (see the difference)

    // 위에서 입력했던 수가 실수였으므로 정수가 받을 수 없으니 (byte, type의 차이) getchar로 버퍼를 비우고 찍는다.
    char c;
    while ((c = getchar()) != '\n')
        putchar(c);
    putchar('\n');
    // 결국 2진수로 변경되어 데이터가 입출력된다.

    return (0);
}