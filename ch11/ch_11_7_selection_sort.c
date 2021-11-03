#include <stdio.h>
#include <strings.h>

/*
    // Selectino Sort
    min index를 바꾼다.
*/
void    my_selection_sort(int num_arr[], size_t arr_size);
void    my_swap(int *a, int *b);

int main()
{
    size_t  arr_size;
    int     num_arr[5] = {64, 25, 12, 22, 11};

    arr_size = (size_t)(sizeof(num_arr) / sizeof(int));    
    my_selection_sort(num_arr,  arr_size);
    for (int i = 0; i < arr_size; i++)
        printf("%d ", num_arr[i]);
    return (0);
}


void    my_selection_sort(int num_arr[], size_t arr_size)
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
            if (num_arr[min_idx] > num_arr[j])
                min_idx = j;
            j++;
        }
        if (min_idx != i)
            my_swap(&num_arr[min_idx], &num_arr[i]);
        i++;
    }
}

void    my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

