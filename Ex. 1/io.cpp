#include <iostream>
#include "io.h"


int readNumber() {
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;
    return number;
}


int WriteNumber(int a, int b) {
    return a + b;
}