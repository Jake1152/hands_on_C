#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first_char(void);
char get_integer(void);
void count(void);

int main()
{
	int user_choice;

	while ((user_choice = get_choice()) != 'q')
	{
		if (user_choice == 'a')
			printf("Avengers assemble!\n");
		else if (user_choice == 'b')
			putchar('\a');
		else if (user_choice == 'c')
			count();
		else
		{
			printf("Error with %d.\n", user_choice);
			exit(1);
		}
	}

	return (0);
}

char get_choice(void)
{
	int user_input;

	printf("Enter the letter of your choice:\n");
	printf("a. avengers\tb.beep\n");
	printf("c. count\tq. quit\n");

	user_input = get_first_char();

	while ((user_input < 'a' || user_input > 'c') && user_input != 'q')
	{
		printf("Please try again.\n");
		user_input = get_first_char();
	}

	return user_input;
}

char get_first_char(void)
{
	int	ch;

	ch = getchar();
	while (getchar() != '\n')
		continue;
	return ch;
}

char get_integer(void)
{
	int input;
	char c;
	while (scanf("%d", &input) != 1)
	{
		// buffer clear, 
		while ((c = getchar()) != '\n')
			putchar(c);
		printf(" is not an integer.\nPlease try again.");
	}

	return input;
}

void count(void)
{
	int c;

	printf("Enter an integer:\n");
	c = get_integer();
	for (int i = 0; i <= c; i++)
		printf("%d\n", i);
	// buffer clear
	while (getchar() != '\n')
		continue;
}


/*
first try
#include <stdio.h>

char get_choice(void);
char get_first_char(void);
char get_integer(void);
void count(void);

int main()
{
	char ch;

	while(1)
	{		
		printf("Enter the letter of your choice:\n");
		printf("a. avengers\t");
		printf("b. beep\n");

		printf("c. count\t");
		printf("d. quit\n");

		ch = getchar();
		if (ch == 'a')
			printf("Avengers aseemble!\n");
		else if (ch == 'b')
			printf("\a");
		else if (ch == 'c')
		{
			int c;
			c = getchar();
			for(int i = 1; i <= c; i++)
				printf("%d\n", i);
		}
		else if (ch == 'q')
		{
			printf("quit \n");
			break ;
		}
	}
	return (0);
}

*/
