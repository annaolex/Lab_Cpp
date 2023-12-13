#include <iostream>
#include <string>
using namespace std;

int main() {
    int month;

    std::cout << "Enter the month number (1-12): ";
    std::cin >> month;

    switch (month) {
        case 1:
            std::cout << "January, Q1" << std::endl;
            break;
        case 2:
            std::cout << "February, Q1" << std::endl;
            break;
        case 3:
            std::cout << "March, Q1" << std::endl;
            break;
        case 4:
            std::cout << "April, Q2" << std::endl;
            break;
        case 5:
            std::cout << "May, Q2" << std::endl;
            break;
        case 6:
            std::cout << "June, Q2" << std::endl;
            break;
        case 7:
            std::cout << "July, Q3" << std::endl;
            break;
        case 8:
            std::cout << "August, Q3" << std::endl;
            break;
        case 9:
            std::cout << "September, Q3" << std::endl;
            break;
        case 10:
            std::cout << "October, Q4" << std::endl;
            break;
        case 11:
            std::cout << "November, Q4" << std::endl;
            break;
        case 12:
            std::cout << "December, Q4" << std::endl;
            break;
        default:
            std::cout << "Invalid month number. Please enter a number between 1 and 12." << std::endl;
            break;
    }

    return 0;
}
