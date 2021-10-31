#include <stdio.h>
#include <stdlib.h> // malloc

void test_function()
{
    int j;
    printf("stack high \t%llu\n", (unsigned long long)&j);
}

int main()
{
    // Array versus pointer
    const char* pt2 = "I am a string!.";
    const char* pt3 = "I am a string!.";
    const char* pt4 = "I am a string!!!."; // <- differnt
    const char ar1[] = "I am a string!.";
    const char ar2[] = "I am a string!.";
    const char ar3[] = "I am a string!.";

    printf("rodata low \t%llu %llu %llu %llu\n",
        (unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4,
        (unsigned long long)"I am a string!.");
        
    printf("Stack high \t%llu %llu %llu %llu\n",
        (unsigned long long)ar1, (unsigned long long)ar2, (unsigned long long)ar3);
    

    // Memory address ehck

    // Local variables

    printf("rodata low \t%llu %llu %llu %llu\n",
        (unsigned long long)&pt2, (unsigned long long)&pt3, (unsigned long long)&pt4);
        
    printf("Stack high \t%llu %llu %llu %llu\n",
        (unsigned long long)&ar1, (unsigned long long)&ar2, (unsigned long long)&ar3);
    
    int i;
    printf("Stack high \t%llu\n", (unsigned long long) &i);

    // Local variables in a function
    test_function();

    // Dynamic allocation
    char *p5  = (char *)malloc(sizeof(char) * 100);
    printf("Heap middle \t%llu\n", (unsigned long long)p5);

    char *p6 = (char *)malloc(sizeof(char) * 100);
    printf("Heap middle \t%llu\n", (unsigned long long)p6);

    // Array Versus Pointer (continued)

    char heart[] = "I love kelly!";
    const char* head = "I love Helly!";

    for (int i=0; i<6; i++)
        putchar(head[i]);
    putchar('\n');

    // pointer addition
    for (int i = 0; i < 6; i++)
        putchar(*(heart + i));
    putchar('\n');

    for (int i = 0; i < 6; i++)
        putchar(*(head + i));
    putchar('\n');


    head = heart;
    // heart = head; // ERROR

    // CANNOT change heart. can change the elements of heart
    heart[7] = 'Hi';
    *(heart + 7) = 'K';

    putchar('\n');

    char *word = "Google";
    // word[2] = 'o'; // Run time Error
    puts(word);

    // Note: const char *word = "Google"; // is recommended

    const char *str1 = "When all the lights are low, ...";
    const char *copy;

    copy = str1;

    printf("%s %p %p\n", str1, str1, &str1);
    printf("%s %p %p\n", copy, copy, &copy);

    // Note: strcpy(), strncpy()

    return (0);
}