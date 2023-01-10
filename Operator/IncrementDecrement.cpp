/*
    Increment Operator : ++         => increases the value of operand by 1
    Decrement Operator + --         => decreases it by 1
*/

#include <iostream>

int main() {
    int a = 10;
    int b = 100;

    int result_a = ++a;
    std::cout << "result_a = " << result_a << std::endl;
    int result_b = --b;
    std::cout << "result_b = " << result_b << std::endl;
    return 0;
}

