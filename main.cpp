#include <iostream>

#include "test1.h"
#include "test2.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    print_test2();
    print_test1();
    return 0;
}
