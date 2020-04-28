#include <iostream>

int main()
{
    int sum = 0, value = 0;
    // read untill end of file calculating running total of values read
    while (std::cin >> value)
    {
        sum += value; // equivalent to sum = sum + value
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;

}
