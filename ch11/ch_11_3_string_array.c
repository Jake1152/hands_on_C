#include <stdio.h>

int main()
{
    // Array of Character Strings

    const char *mythings[5] = {
        "Dancing is the rain",
        "Counting apples",
        "Wathcing movies with friends",
        "Writing sad letters",
        "Studying the C language"
    };

    const char *yourthings[5][40] = {
        "Studying the C++ language",
        "Dancing is the rain",
        "Counting apples",
        "Wathcing movies with friends",
        "Writing sad letters"
    };

    const char *temp1 = "Dancing in the rain";
    const char *temp2 = "Studing the C++ Language";

    printf("%s %u %u\n", mythings[0], (unsigned)mythings[0], (unsigned)temp1);
    printf("%s %u %u\n", yourthings[0], (unsigned)yourthings[0], (unsigned)temp2);
    // printf("%s %u %u\n", &yourthings[0][0], (unsigned)temp2);
    printf("\n");

    printf("%-10s %-10s\n", "My Things:", "Your Things:");
    for ( int i = 0; i < 5; i++)
        printf("%-10s %-10s\n", mythings[i], yourthings[i]);
    // -30s의 역할
    
    printf("\nsizeof mything: %zd, sizeof your yourthing: %zd\n",
        sizeof(mythings), sizeof(yourthings));

    for (int i = 0; i < 100; i++)
        printf("%c", mythings[0][i]);
    printf("\n");
    printf("\n");

    for (int i = 0; i < 200; i++)
        printf("%d", yourthings[0][i]);
    printf("\n");
    printf("\n");

    for (int i = 0; i < 200; i++)
        printf("%c", yourthings[0][i]);
    printf("\n");
    printf("\n");

    return (0);
}