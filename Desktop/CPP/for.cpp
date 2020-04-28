#include <iostream>

// for statement
int main()
{
    int sum = 0;
    // sum values 1 to 10 inclusive
    for(int val = 1; val <= 10; val++)
    {
        sum += val; // equivalent to sum = sum + val
    }
    std::cout << "Sum of 1 to 10 inclusive is: " << sum << std::endl;

    // write a program that decrements from 10 to 0 using a for loop

    for (int i = 10; i >= 0; i--)
    {
        std::cout << i << std::endl;
    }
    int num1, num2;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;
    std::cout << "Your numbers: \n";
    for (int i = num1; i <= num2; i++)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
