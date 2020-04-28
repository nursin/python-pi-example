#include <iostream>

// While statement
int main()
{
    int sum = 0, val = 50;
    // keep executing the while as long as val <= 10
    while(val <= 100) {
        sum += val; // assign sum + val = sum
        val++; // add 1 to val
    }
    std::cout <<"Sum of 1 to 10 inclusive is " <<
        sum << std::endl;

    int num = 10;
    while(num >= 0) {
        std::cout << num << "\n";
        num--;
    }
    std::cout << "Enter two numbers:" << std::endl;
    int num1, num2;
    std::cin >> num1 >> num2;

    while(num1 <= num2) {
        std::cout << num1 << "\n";
        num1++;
    }
    return 0;
}
