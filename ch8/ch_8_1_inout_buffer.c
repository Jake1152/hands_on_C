#include <stdio.h>
// #include <conio.h> // Windows, __getch(), _getche()
int main()
{
	char c;

	// while ((c = _getche()) != '.') // echo
	while ((c = getchar()) != '.')
		putchar(c);
	return (0);
}
