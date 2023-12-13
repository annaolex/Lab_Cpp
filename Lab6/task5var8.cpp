#include <iostream>

int main() {
    int N, originalN, lastDigit, firstDigit, reversedN = 0;
    
    std::cout << "Enter a natural number N: ";
    std::cin >> N;

    originalN = N;
    lastDigit = N % 10;

    while (N >= 10) {
        N /= 10;
    }

    firstDigit = N;

    reversedN = lastDigit * 10 + originalN / 10;
    
    std::cout << "Number after swapping the first and last digit: " << reversedN << std::endl;

    return 0;
}
