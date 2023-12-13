#include <iostream>
#include <string>
#include <cmath>

int main() {
    double a = 1;
    double b = 0.001;

    double result = cbrt(((a - b) / (b + a)) * exp(log(cos(a - b) * M_PI / 8) / 0.137));

    std::cout << result << std::endl;

    return 0;
}
