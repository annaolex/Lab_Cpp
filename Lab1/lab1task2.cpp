#include <iostream>
#include <cmath>

int main() {
    double a = 4;
    double b = 3.141;

    double result = (0.75 * exp(1 - b) + 0.31 * exp(1 - a)) / (0.731 + pow(sin((b / a) * M_PI), 2));

    std::cout  << result << std::endl;

    return 0;
}
