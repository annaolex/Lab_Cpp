#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int x, y;
    cin >> x >> y;

    if (x >= 0 && x <= 1 && y >= 0 && y <= 0) {
        cout << "WIN";
    } else if (x >= -1 && x <= 0 && y >= 0 && y <= 1) {
        cout << "WIN";
    } else {
        cout << "LOSE";
    }

    return 0;
}
