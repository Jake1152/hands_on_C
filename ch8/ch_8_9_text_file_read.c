#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE *file = NULL;  //  file 이라는 변수 사용, pointer 사용 NULL로 초기화
    char file_name[] = "input1.txt"; // TODO: use scanf(...)

    file = fopen(file_name, "r"); // file을 open. file_name이 가리키는 이름의 파일을 "r" read한다., read ro write
    if (file == NULL)   // 0과 같다 여기서 NULL의 의미는 읽어들지 못했다는 의미
    {
        printf("Failed to open file.\n");
        exit(1004);    // 파일을 못열었으니 exit로 프로그램 자체를 종료해버린다.
        // exit(number) number는 operating 시스템에서 처리
        // 종료될때 나오는 숫자
    }

    while ((c = getc(file)) != EOF) //  c는 file내용을 읽기위해 사용 getc -> get chrar
        putchar(c);
    fclose(file);

    return (0);
}