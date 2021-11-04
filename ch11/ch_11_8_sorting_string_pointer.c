#include <stdio.h>
#include <string.h>


void    printStringArray(char *arr[], int size);
void    my_selection_sort(char *num_arr[], size_t arr_size);
void    my_swap(char **a, char **b);


int main()
{
    char    *arr[] = {"Cherry", "AppleBee", "Pineapple", "Apple", "Orange"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printStringArray(arr, n);

    my_selection_sort(arr, n);  // asc order

    printStringArray(arr, n);

    return (0);
}


void    printStringArray(char *arr[], int size)
{
    int i = 0;

    while (i < size)
    {
        printf("%s\n", arr[i]);
        i++;
    }
    putchar('\n');

}

void    my_selection_sort(char *num_arr[], size_t arr_size)
{
    size_t  min_idx;
    size_t  i;
    size_t  j;

    i = 0;
    while (i < arr_size)
    {
        j = i;
        min_idx = i;
        while (j < arr_size)
        {
            if (strcmp(num_arr[min_idx], num_arr[j]) > 0)
                min_idx = j;
            j++;
        }
        if (min_idx != i)
            my_swap(&num_arr[min_idx], &num_arr[i]);
        i++;
    }
}

void    my_swap(char **a, char **b)
{
    char    *tmp;

    tmp =*a;
    *a = *b;
    *b = tmp;
}
