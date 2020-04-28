#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <numeric>
#include <ctime>
#include <cmath>


using namespace std;

int main(int argc, char** argv) {
    cout << numeric_limits<int>::min() << endl;
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<unsigned>::min() << endl;
    cout << numeric_limits<unsigned>::max() << endl;
    cout << numeric_limits<long>::min() << endl;
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<unsigned long>::min() << endl;
    cout << numeric_limits<unsigned long>::max() << endl;
    cout << numeric_limits<float>::min() << endl;
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::min() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::min() << endl;
    cout << numeric_limits<long double>::max() << endl;

    float f1 = 1.1111111, f2 = 1.1111111;
    double d1 = 1.1111111111111111, d2 = 1.1111111111111111;

    printf("Sum = %.7f\n", (f1 + f2));
    printf("Sum = %.16f\n", (d1 + d2));

    return 0;
}
