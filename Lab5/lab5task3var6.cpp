#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(double x) {
    return (5 * pow(x, 2) - 7 * x + 3) / (x + 7) - 13 * cos(x);
}

int main() {
    double a, b, h;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the step size h: ";
    cin >> h;

    cout << setw(4) << "X" << setw(10) << "Y" << endl;

    for (double x = a; x <= b; x += h) {

        if (x < a || x > b) {
            cout << "The value of x does not belong to the domain." << endl;
            break;  
        }

        double y = f(x);

        cout << setw(4) << x << setw(10) << y << endl;
    }

    return 0;
}
