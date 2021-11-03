#include <stdio.h>
#include <string.h>

void fit_str(char *, unsigned int);
char	*mine_strcat(char *destination, const char *source);

int main()
{
	/*
		strlen() : returns lenfth of the string
	*/

	// TODO: use debugger
	// char msg[] = "Just, " "do it !";
	// puts(msg);
	// printf("Length %lu\n", strlen(msg));
	// fit_str(msg, 4);
	// puts(msg);
	// printf("Lenth %lu\n", strlen(msg));
	// TODO: implement fit_str()

	/*
		strcat() and strncat() : string concatenation
	*/

	// char str1[100] = "First string";
	// char str2[] = "Seconde string";

	// strcat(str1, ", ");
	// strcat(str1, str2); 
	// strncat(str1, str2, 2); // Append 2 characters
	// puts(str1);

	/*
		strcmp() and strncmp() : compare strings (not characters)
	*/

	// printf("%d\n", strcmp("A", "A"));
	// printf("%d\n", strcmp("A", "B"));
	// printf("%d\n", strcmp("B", "A"));
	// printf("%d\n", strcmp("Hello", "Hello"));
	// printf("%d\n", strcmp("Banana", "Bananas"));
	// printf("%d\n", strncmp("Bananas", "Banana", 6));
	// 같으면 0 아니면 음수

	/*
		strcpy() and strncpy()
	*/

	// char dest[100] = "";	// make sure memory is enough
	// char source[] = "Start programming";
	// dest = source;		// Error
	// dest = "Start something"; // Error
	// strcpy(dest, source);
	// printf("dst : %s\n", dest);
	// strncpy(dest, source, 5);
	// printf("dst : %s\n", dest);

	/*
		sprintf()
	*/


	// char str[100] = "";
	// int i = 123;
	// double d = 3.14;
	// sprintf(str, "%05d.png %f", i, d);
	// puts(str);
	// capture000.png, capture001.png ...

	/*
		There are more functions
	*/

	// 두번쨰 인자 문자가 있는 첫번쨰 인자의 시작되는 위치를 return 없으면 NULL
	printf("%s\n", strchr("Hello, World", 'W'));
	// 두번째 인자의 'W'와 일치하는 하기 시작하는 첫번쨰 인자 W에 매칭되어World부터 나온다.

	// strpbrk 두번째 인자에 있는 문자 중 첫번째 문자열에 해당되는 문자의 위치를 반환
	printf("%s\n", strpbrk("Hello, world", "ABCDE")); // NULL
	printf("%s\n", strpbrk("Hello, world", "abcde")); // ello부터

	printf("%s\n", strrchr("Hello, World, Hello, World", 'l'));
	// last occurence

	printf("%s\n", strstr("Hello, World", "wor"));
	printf("%s\n", strstr("Hello, World", "Wor"));



	return (0);
}

void fit_str(char *str, unsigned int size)
{
	if (strlen(str) > size)
		str[size] = '\0';
}

char	*mine_strcat(char *destination, const char *source)
{
	size_t	dst_idx, i = 0;

	dst_idx = strlen(destination);
	while (source[i])
	{
		destination[dst_idx] = source[i];
		i++;
		dst_idx++;
	}
	destination[dst_idx] = '\0';	
	return (destination);
}