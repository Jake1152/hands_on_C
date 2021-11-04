#include <stdio.h>
#include <ctype.h>
#include <string.h> // toupper(), ispunct(),....

#define NUM_LIMIT 1024

void toUpper(char *);
int punctCount(const char *);

int main()
{
    char    line[NUM_LIMIT];
    char    *new_line = NULL;
    // fgets(line, NUM_LIMIT, stdin);
    line[0] = '\0';
    new_line = strchr(line, '\n'); // find first newline
    if (new_line)
        *new_line = '\0';
    
    toUpper(line);
    puts(line);
    printf("%d\n", ispunct(line));
    // printf("%d\n", punctCount(line));

    return (0);
}

void toUpper(char *ch)
{
    if (*ch >= 97 && *ch <= 122)
        *ch = *ch - 32;
}


int punctCount(const char *ch)
{
    size_t  cnt = 0;

    while (*ch)
    {
        if ((*ch >= 65 && *ch <= 90) || \
            (*ch >= 97 && *ch <= 122))
            ;
        else
            cnt++;
        ch++;
    }
    return (cnt);
}

