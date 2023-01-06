#include <iostream>
#include <vector>

int main() {

    int a = 0;
    int b = 0;
    auto func = [&a, b](int c) mutable -> int {
        a = (++b) + c;
    };
    func(4);
    std::cout << a << std::endl << b <<std::endl;
    /* error because lambda fuction if not has mutable cant change value in capture except arg is reference(&)*/
    // auto func = [&a, b](int c) -> int {  
    //     a = (++b) + c;
    // };
    // Declare a vector
    std::vector<int> vec{ 1, 2, 3, 4, 5 }; 
    int threshold = 10;
    auto it = std::find_if(vec.begin(), vec.end(), [threshold](int value) { return value < threshold; });

    std::cout << "Max = " << *(it + 1) << std::endl;
    return 0;
}