
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;

    // Loop for five iterations
    for (int i = 1; i <= 5; ++i) {
        // User input
        cout << "Enter the value of x to calculate the function (iteration " << i << "): ";
        cin >> x;

        double y;

        // Check for division by zero
        if (5 * x == 0) {
            cout << "Division by zero is not possible. Please enter a different value for x." << endl;
        } else {
            // Calculate the function y
            y = sin(5 * x + 1.5) / (5 * x);
            cout << "Result for x = " << x << ": " << y << endl;
        }
    }

    return 0;
}
