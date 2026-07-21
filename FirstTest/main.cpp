#include <iostream>
#include "io.h"

int main() {
    int a = readNumber();
    int b = readNumber();
    std::cout << "The result is: " << WriteNumber(a, b) << std::endl;
    return 0;
}