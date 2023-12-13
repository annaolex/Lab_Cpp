#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int num1, num2, num3, num4;
    cout << "Enter the first number (1-255): ";
    cin >> num1;
    cout << "Enter the second number (1-255): ";
    cin >> num2;
    cout << "Enter the third number (1-255): ";
    cin >> num3;
    cout << "Enter the fourth number (1-255): ";
    cin >> num4;
    if (num1 >= 1 && num1 <= 255 &&
        num2 >= 1 && num2 <= 255 &&
        num3 >= 1 && num3 <= 255 &&
        num4 >= 1 && num4 <= 255) {
        cout << num1 << "." << num2 << "." << num3 << "." << num4 <<endl;
    } else {
        cout << "Invalid input. Numbers must be in the range 1-255." <<endl;
    }
    return 0;
}