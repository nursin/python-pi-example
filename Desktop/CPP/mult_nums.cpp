#include <iostream>

long MultNums();

int main() {
    MultNums();
    return 0;
}

long MultNums() {
    long num1, num2;
    std::cout << "Enter two numbers to multiply: " << std::endl;
    std::cin >> num1 >> num2;
    std::cout << num1 * num2 << std::endl;
}
