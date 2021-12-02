#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ch_12_12_random.h"

int main()
{
    /*
        rand()
        - 0 to RAND_MAX (typically INT_MAX)
        - defined in stdlib.h
        컴퓨터는 완전히 랜덤한 값을 만들 수 없다.
        사람이 보기에 랜덤인 것 처럼 보이게 만든다.
    */

   // srand(1); // random seed
   // srand((sunsigned int)time(0));
   for (int i = 0; i < 10; ++i)
   {
       printf("%d\n", rand());
       // printf("%d\n", rand() % 6 + 1);
   }

   unsigned int next = 1;

   for (int i = 0; i < 10; i++)
   {
       next = next * 1103515245 + 1234;
       next = (unsigned int) (next / 65536) % 32768;
       printf("%d\n", (int)next);
   }

    return (0);
}