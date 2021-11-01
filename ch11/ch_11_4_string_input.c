#include <stdio.h>

#define STRLEN 128

char *custom_string_input(char *st, int n);

int main()
{
    // Creating Space

    // char    *name = "";    // Error at RUN-TIME
    // // char    name[128];
    // int result = scanf("%s", name);
    // // 주소공간을 쓴다.

    // printf("result : %s\n", result);

    /*
        scanf() vs gets()
        scnaf() reads one word
        gets() reads one line and removes \n annd add \0
    */

    // char words[STRLEN] = "";
    // gets(words);
    // // 문자열 개행있을떄까지 읽는다.
    // gets_s(words, sizeof(words));
    // // C11에서는 pointer, sizeof를 둘다 쓴다.
    // printf("START\n");
    // printf("%s\n", words);
    // puts(words);
    // puts("END.");

    // TODO: Try char words[5];

    /* fgets() and fputs() */

    char words[STRLEN];
    fgets(words, STRLEN, stdin);    // does NOT remove \n

    // TODO: '\n' with '\0'

    fputs(words, stdout);
    fputs("END", stdout);

    /* SMall array */


    return (0);
}