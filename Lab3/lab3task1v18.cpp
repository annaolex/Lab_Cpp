#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    std::cout << "Enter a three-digit positive number: ";
    std::cin >> N;

    if (N >= 100 && N <= 999) {
        int digit1 = N % 10;
        int digit2 = (N / 10) % 10;
        int digit3 = N / 100;
        int sum = 0;
        if (digit1 > 5) {
            sum += digit1;
        }
        if (digit2 > 5) {
            sum += digit2;
        }
        if (digit3 > 5) {
            sum += digit3;
        }

        std::cout << "Sum of digits greater than 5: " << sum << std::endl;
    } else {
        std::cout << "Please enter a valid three-digit positive number." << std::endl;
    }

    return 0;
}
