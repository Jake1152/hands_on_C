#include <stdio.h>	// getchar(), putchar()
#include <ctype.h>

int main()
{
	char ch;	// int로써도 가능

	while ((ch = getchar()) != '\n')
	{
		if (islower(ch)) // 'A' = 65, 'a' = 97
			ch = toupper(ch);
		else if (isupper(ch))
			ch = tolower(ch);

		// for (int i ='0'; i <= '9'; ++i)
		if (isdigit(ch) != 0)
			ch = '*';
		putchar(ch);
	}
	putchar(ch);

	return 0;
}