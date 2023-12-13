#include <cmath>
#include <iostream>

int main() {
    long long product = 1;

    for (int i = 2; i <= 20; i += 2) {
        product *= i;
    }
    std::cout << "The product of even numbers from 1 to 20 is: " << product << std::endl;

    return 0;
}