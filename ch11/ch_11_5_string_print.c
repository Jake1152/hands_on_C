#include <stdio.h>

#define TEST "A string from #define."

void	custom_put(const char *str);    // Only two lines
int		custom_put2(const char *str);   // Add \n, return # of characters

int main()
{
	/*
		puts(): add \n at the end 
	*/
	// char str[60] = "string array initalized";
	// const char *ptr = "A pointer initialize";

	// puts("String wihtout \\n");
	// puts("END");
	// puts(TEST);
	// puts(TEST + 5);
	// puts(&str[3]);
	// // puts(str[3]);   // Error
	// puts(ptr + 3);
	// 시작위치가 3칸 이동된 곳부터 나온다.

	/*
		string without \0
	*/

	// char str[] = {'H', 'I', '!'};   // No \0 at the end
	// puts(str);  // Visual Studio는 경고를 준다.
	// puts함수는 null만나야 종료된다.
	// \0을 만나야 끝난다.
	// GCC에서는 빨리 만나는것으로 보인다.

	
	/*
		puts() and fputs()
	*/

	// char line[100];
	// while (gets(line))	// while (gets(line) != NULL)
	// 	puts(line);
	
	// char line[100];
	// while (fgets(line, 100, stdin))	// 끝이 어디인지 모른다는 위험성 존재
	// 	fputs(line, stdout);
		// file output


	// char str[] = "Just do it, do it!";
	// printf("%s\n", str);	// \n added
	// puts(str);

	// char input[100] = "";
	// int ret = scanf("%10s", input);	// Input: "Just do it, do it!\n" (Note %10s)
	// // scanf는 여러가지 자료형이 섞여있을때 입력받기 수월하다. scanf읽기는 빈칸에서 멈춤
	// printf("%s\n", input);	// Output: "Just"
	// ret = scanf("%10s", input);		// Reads remaining buffer
	// printf("%s\n", input);			// Output: "do"

	/*
		Custom function
	*/

	custom_put("Just ");
	custom_put("Do it!");

	printf("%d\n", custom_put2("12345"));

	return (0);
}

void    custom_put(const char *str)
{
	// puts(str);
	// putchar('\n');
	while (*str != '\0')	// while(*str)
		putchar(*str++);
}


int     custom_put2(const char *str)
{
	int count = 0;
	while (*str)
	{
		putchar(*str++);
		count++;
	}
	putchar('\n');
	return count;
}
