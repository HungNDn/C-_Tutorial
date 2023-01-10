/* LValue(left value) la phep gan gia tri */

/* RValue(right value) la phep gan lien quan den dia chi & */

#include <iostream>
using namespace std;
int main() {
    int a = 1; // Gan left value
    int *p, *q; // *p, *q la left value

    p = &a; // Gan right value
    q = p + 3; // Gan right value (+1 tuc la p tai 1 -> q = 1 + 4(do kieu int 4 bit) + 1; +2 tuc la p tai 1 -> q = 1 + 4*2(do kieu int 4 bit) + 1;)

    std::cout << &a << std::endl << p << std::endl << q << std::endl;
    return 0;
}