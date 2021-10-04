#include <stdio.h>
#include <string.h> // strlen()

#define	WIDTH	30
#define	NAME	"Jinho IM"
#define	ADDRESS	"Seoul, Republic of Korea"
// declation, prototype
// prototype만 가지고도 compile이 된다.
// prototype의 선언과, definition의 parameter를 일치시킨다.
// 예전 컴파일러의 경우 prototype과 definition의 parameter가 다르면 문제가 생길 수 있다
// 또한 헷갈릴 수 있어서 그렇다.
// 하지만 parameter가 너무 긴 경우 한쪽은 짧게 하거나 다르게 할 수 있다.
void    print_bar(int n);
void	print_multiple_chars(char c, size_t n);
void	print_centered_str(char str[], int width);

int main()
{
	size_t n_blanks = 0;
	/*
	prototype만가지고 컴파일한다.
	링킹은 이후에한다.
	컴파일링과 링킹은 분리되어있다.
	링킹error	
	*/
	print_bar(WIDTH);	// argument
	print_centered_str(NAME, WIDTH);	// actual parameter
	print_centered_str(ADDRESS, WIDTH);
	print_bar(WIDTH);

	return (0);
}
//  함수 앞에 타입은 함수의 반환값을 의미한다. return으로 넘겨지는 값
// 	definition
void    print_bar(int n)
{
	print_multiple_chars('*', WIDTH);
	putchar('\n');
}
// 함수를 매개변수화, 어떤 매개변수가 들어오든 동작하도록 일반화 시켰다.
void	print_multiple_chars(char c, size_t n) // 받는쪽에서는 parameter. formal (argument/parameter)
{
	for (int i = 0; i < n; i++)
		putchar(c);
}

void	print_centered_str(char str[], int width)
{
	size_t	n_blanks;	

	n_blanks = (WIDTH - strlen(str)) / 2;
	print_multiple_chars(' ', n_blanks);
	printf("%s\n", str);
}