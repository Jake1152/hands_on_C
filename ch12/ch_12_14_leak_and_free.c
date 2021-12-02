#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Dummy Output\n");

    int *ptr_backup = NULL;
    {
        int n = 100000000;
        int *ptr = (int *)malloc(n * sizeof(int));

        if (!ptr)// if (ptr == NULL)
        {
            printf("Malloc() failed\n");
            exit(EXIT_FAILURE);
        }
        for (int i = 0; i < n; i++)
            ptr[i] = i + 1;

        printf("%d %d\n", ptr[0], ptr[1]);

        ptr_backup = ptr;

        free(ptr);
    }

    // what happens?
    printf("%d %d\n", ptr_backup[0], ptr_backup[1]);
    printf("Dummy Output\n");
    // ptr 안 다른 블록이라 이제 밖에서 접근할 수 없다.
    // 메모리 누수 발생

    return (0);
}