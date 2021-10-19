#include <stdio.h>

int main()
{
    long long *ptr = 0; // try double*, long long *, char*, void*
    // long long *ptr = NULL; // 일반적으로는 포인터 값에 NULL을 넣는게 낫다.
    // 리터럴한 값보다는 가독성 좋은 코드 입력

    // printf("%d", *ptr); // Error in this lecture

    printf("%p %lld\n", ptr, (long long)ptr);

    // ptr += 1;   // try -=, ++, --, -, +
    ptr -= 2;   // try -=, ++, --, -, +
    // 데이터 사이즈 만큼 인덱싱 가능
    // 자료형에 맞춰서 건너뛴다.

    printf("%p %lld\n", ptr, (long long)ptr);
    // void pointer산술 연산은 막혀있다.
    // ptr = -ptr;      // Not working
    // ptr = +ptr;      // Not working
    // 포인터는 주소값이기에 음수로 바꾸는 것이 말이 안된다.
    // +역시 안된다.
    
    /* Subtraction */
    int arr[10];
    int *ptr1 = &arr[3], *ptr2 = &arr[5];
    // 배열간의 차이, 몇칸 차이 나는지 알려준다.
    // 차이나는 byte / data type

    // ptr2 = ptr1 + ptr2;
    int i = ptr2  - ptr1;

    printf("%p %p %d\n", (long long)ptr1, (long long)ptr2, i);
    // printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);

    return (0);
}