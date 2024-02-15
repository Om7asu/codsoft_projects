#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;

    switch (operation) {
        case '+':
            std::cout << "The result is: " << num1 + num2 << "\n";
            break;
        case '-':
            std::cout << "The result is: " << num1 - num2 << "\n";
            break;
        case '*':
            std::cout << "The result is: " << num1 * num2 << "\n";
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error: Division by zero is not allowed.\n";
            } else {
                std::cout << "The result is: " << num1 / num2 << "\n";
            }
            break;
        default:
            std::cout << "Error: Invalid operation. Please enter one of the following: +, -, *, /\n";
            break;
    }

    return 0;
}