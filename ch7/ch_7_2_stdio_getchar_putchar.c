#include <stdio.h>	// getchar(), putchar()

int main()
{
	/*
	*	1. Introduce getchar(), putchar()
	*	2. Use while loop to process character sequences
	*	3. Filter a sepcific character
	*	4. Convert numbers to asterisks
	*	5. Lower characters to Upper characters
	*/

	char ch;	// int로써도 가능
	
	// ch = 0; // buffer
	// 한 글자씩 가져옴 (1 byte)
	// 표준입출력 buffer를 사용
	//  int로 받음 정수를 넣으면 ascii코드로 나옴
	// int ch로해도 동일하게 나옴 char도 int이며 getchat가 ascii를 이용하여 표현
	// putchar(ch);
	// while (ch != '\n') // Use '\n' to finde end of a sentance
	// while ((ch = getchar()) != '\n') // Use '\n' to finde end of a sentance
	{
		// ch = getchar();
		// putchar(ch);
		// 1글자씩 처리한다.
		// 간단하게 딱 떨어지지는 않는다.
		// buffer와 연관지어서 한다.
		// 내부적으로 동작
		// code abcde putchar getchar		
	}
	/*
	buffer라는게 있다.
	한번에 여러개 받아와서 처리
	하지만 1번에 1글자씩 받아와서 처리하는 함수가 있다.
	scanf, printf이외의 입출력함수가 있다.
	내부에서 buffer라는게 작동한다.
	printf도 버퍼를 쓰는가?
	*/

	/* 0~9사이이면 *로 변경 */
	// while ((ch = getchar()) != '\n') // Use '\n' to finde end of a sentance
	// {
	// 	if(ch == 'f')
	// 		ch = 'x';
	// 	else if(ch == 'F')
	// 		ch = 'X';
	// 	putchar(ch);
	// }
	// putchar(ch);

	/* 0~9사이이면 *로 변경 */
	// while ((ch = getchar()) != '\n')
	// {
	// 	if (ch == '0')
	// 		ch = '*';
	// 	if (ch == '1')
	// 		ch = '*';
	// 	if (ch == '2')
	// 		ch = '*';
	// 	if (ch == '3')
	// 		ch = '*';
	// 	if (ch == '4')
	// 		ch = '*';
	// 	if (ch == '5')
	// 		ch = '*';
	// 	putchar(ch);
	// }
	
	/* 0~9사이이면 *로 변경 */
	// while ((ch = getchar()) != '\n')
	// {
	// 	for (int i = '0'; i <= '9'; ++i)
	// 		if (ch == i)
	// 			ch = '*';
	// 	putchar(ch);
	// }

	/* for문 없이 조건식만으로 처리 */
	// while ((ch = getchar()) != '\n')
	// {
	// 	if (ch >= '0' && ch <= '9')
	// 		ch = '*';
	// 	putchar(ch);
	// }

	/* 대문자를 소문자로 변경 */
	// while ((ch = getchar()) != '\n')
	// {
	// 	if (ch >= 'A' && ch <= 'Z')
	// 		ch += 32;
	// 	putchar(ch);
	// }

	/* 소문자를 대문자로 변경 */
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'a' && ch <= 'z')
			ch -= 32;
		putchar(ch);
	}

	putchar(ch);

	return 0;
}