#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double x;
    std::cin >> x;
    return x;
}

char getOperator()
{
    std::cout << "Enter one of the following: +, -, *, or / : ";
    char op;
    std::cin >> op;
    return op;
}

int main() {
    double a = getDouble(), b = getDouble();
    char op = getOperator();
    switch (op) {
        case '+':
            std::cout << a + b << std::endl;
            break;
        case '-':
            std::cout << a - b << std::endl;
            break;
        case '*':
            std::cout << a * b << std::endl;
            break;
        case '/':
            if (b == 0) {
                std::cout << "Division by zero!" << std::endl;
            }
            else {
                std::cout << a / b << std::endl;
                break;
            }
    }
}