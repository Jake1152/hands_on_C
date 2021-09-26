#include <stdio.h>

int main()
{
	// int a = 0;
	// a++; // 0
	// printf("%d\n", a); // 1

	// ++a;  // ++(1) -> 2
	// printf("%d\n", a); // 2

	// double b = 0;
	// b++; // 0
	// printf("%f\n", b); // 1.0

	// ++b;  //2.0
	// printf("%f\n", b); // 2.0

	// int count = 0;
	// while (count < 10)	// ++count or count++
	// {
	// 	printf("%d ", count);	// ++count or count ++
	// 	count++;
	// }
	// int count = 0;
	// while (count++ < 10)
	// {
	// 	printf("%d ", count);
	// 	// ++count;
	// }

	// int i = 1, j = 1;
	// int i_post, pre_j;

	// i_post = i++;
	// pre_j = ++j;

	// printf("%d %d\n", i, j);  //  2 2
	// printf("%d %d\n", i_post, pre_j); // 1 2

	// int i = 3;
	// int l = 2 * --i;
	// printf("%d %d\n", i, l); // 2 4

	// i = 1;
	// l = 2 * i--;
	// printf("%d %d\n", i, l); // 0 2 곱하기가 먼저되고 "후위연산자"는 증감이 적용된다.

	/* very high precedence */
	int x, y, z;
	x = 3, y = 4;
	// z = x+(++y) * 5; // (x+y)++ or x+(y++)
	z = (x+y)++ * 5; // (x+y)++ or x+(y++)
	printf("%d %d %d", x, y, z);

	/* ++ and  -- affect modifiable */
	// int x = 1, y = 1, z;
	// z = x * y++; // (x) * (y++), not (x*y)++ R-value라서 증감연산자를 쓸 수 없다.
	// z = 3++; // error literal이라.

	/* Bad practices */
	// int n = 1;
	// printf("%d %d", n, n * n++);
	// int x = n / 2 + 5 * (1 + n++);
	// int y = n++ + n++;
	// 명확한 경우에만 써야한다.
	// 상황에 따라 다른 경우에 쓰면 문제발생가능
	// 인자로써 주어질떄
	// 여러번 사용될때는 시스템마다 결과가 다르게 나올 수 도 있다
	// 식을 여러줄로 쪼개서 의도가 명확하게 반영될 수 있도록 만든다.

	return (0);
}
