#include <stdio.h>
#define PI 3.141592f
#define AI_NAME "Friday"
// define으로 선언할때는 대문자로 쓰는 것이 일반적(관습)

int main()
{
	// float pi = 3.141592f;
	// 이렇게하면 pi를 잘못 바꾸면 문맥오류 발생
	// 상수로 만들면 바꿀 수 없게 된다
	// const float pi = 3.141592f;
	// 이렇게 const를 써서 기호적 상수로 만든다.

	float radius, area, circum;

	printf("I'm %s.\n", AI_NAME);
	printf("Please, input radius\n");

	scanf("%f", &radius);

	area = PI * radius * radius;	// area = pi * r * r
	circum = 2.0 * PI * radius; /* circum = 2.0 * pi * r */
	// 컴파일러 입장에서는 PI가 위에 정의한 3.141592f 대체되어 계산된다.
	// 사람의 입장에서 실수하지 않기 위해, 쉽게 관리하기 위해서 필요하다.

	// sphere area, sphere volume, ...
	// 확장할때 계속 느는건 실수할 위험이 생긴다.

	printf("Area is %f\n", area);
	printf("circumference is %f\n", circum);

	return 0;
}
