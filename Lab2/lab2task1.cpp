#include <iostream>
#include <string>
#include <cmath>
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

int main() {
    double x;
    double b;
    double c;
    double y;
    std::cout << "Enter x value: ";
    std::cin >> x;
    std::cout << "Enter b value: ";
    std::cin >> b;
    std::cout << "Enter c value: ";
    std::cin >> c;


    if (x < 2) {
        y = (x - 9 * b * x) / (x - 2 * b * x * x);
    }
    else {
        y = (x - 2 * c * x) / (x - 5 * c * x * x * x);
    }

    std::cout << "Result: Y=" << y << std::endl;

    return 0;
}
