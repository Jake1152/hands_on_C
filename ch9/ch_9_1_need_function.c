#include <stdio.h>
#include <string.h> // strlen()

#define	WIDTH	30
#define	NAME	"Jinho IM"
#define	ADDRESS	"Seoul, Republic of Korea"

void    print_bar(int n);
void	print_multiple_chars(char c, size_t n);
void	print_centered_str(char str[], int width);

int main()
{
	size_t n_blanks = 0;
	
	print_bar(WIDTH);
	print_centered_str(NAME, WIDTH);	
	print_centered_str(ADDRESS, WIDTH);
	print_bar(WIDTH);

	return (0);
}

void    print_bar(int n)
{
	print_multiple_chars('*', WIDTH);
	putchar('\n');
}

void	print_multiple_chars(char c, size_t n)
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