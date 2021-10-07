#include "ch_9_11_my_print_functions.h" 
// 이렇게 미리 만들어둔 header file을 가져온다.
// 보통 main을 가지고 있는 파일에 main이름을 넣는다.
// main은 os에서 무조건 호출해주니까 핵심이라 빨리 알아챌 수 있게 그렇게 한다.

int main()
{
    print_hello();
    print_hi();
    print_hello();
    print_hi();
    print_str("No one lives forever.");
    print_str("Valar morghulis");

    return (0);
}$