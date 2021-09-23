#include <stdio.h>

int main()
{
	int count = 0;

	while (1)
	{
		printf("Current count is %d.Continue?(y/n)\n", count);

		int c = getchar();
		if (c == 'n' || c == 'N')
			break ;
		else if (c == 'y' || c == 'Y')
			count++;
		while (getchar() != '\n')
			continue;
	}
	return (0);
}

/*

else if (c == 'y')
		{
			while (getchar() != '\n')
				continue;
			count++;
		}
		else
		{
			printf("Pleas input y or n\n");
		}

*/