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

    // char words[STRLEN];
    // fgets(words, STRLEN, stdin);    // does NOT remove \n
    // // fgets(words, STRLEN, 파일 pointer);    // does NOT remove \n
    // // file gets, file 자리에 stdin을 사용하여 쓸수도 있다.

    // // gets보다 fgets가 더 안정적으로 쓸 수 있다. 

    // // TODO: '\n' with '\0'
    // int i = 0;
    // while (words[i] != '\n' && words[i] != '\0')
    //     i++;
    // if (words[i] == '\n')
    //     words[i] = '\0';

    // fputs(words, stdout);
    // fputs("END", stdout);

    /* Small array */
    char small_array[5];
    puts("Enter long strings:");
    fgets(small_array, 5, stdin); // EOF를 받으면 '\0'을 retunn
    printf("%p\n", small_array);
    printf("%p\n", fgets(small_array, 5, stdin));   // Return value of fgets
    fputs(small_array, stdout);

    // scanf()

    char str1[6], str2[6];
    int count = scanf("%5s %5s", str1, str2);
    int count = scanf("%6s %6s", str1, str2);
    int count = scanf_s("%5s %5s", str1, 6, str2, 6);
    printf("%s|%s \n", str1, str2);

    /* An example of custom input function */
    // char word[11];
    // puts(custom_string_input(word, 11));

    return (0);
}