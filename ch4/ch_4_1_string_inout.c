#include <stdio.h>

int main()
{
	// char fruit_name;	// stores only one character.
	char fruit_name[40];

	printf("What is your favorite fruit?\n");

	// scanf("%c", &fruit_name);	// be careful with &
	scanf("%s", fruit_name);

	printf("You like %s!\n", fruit_name);

	return 0;
}