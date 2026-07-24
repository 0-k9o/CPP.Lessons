#include <iostream>

int writeNumber() {
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;
    return x;
}

bool isEven(int a) {
    return (a % 2 == 0);
}

int main() {
    int a = writeNumber();
    if (isEven(a)) std::cout<<"Even";
    else std::cout<<"Odd";
}