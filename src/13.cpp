#include <iostream>
using namespace std;

int main() {
    int x = 5;
    double y = 3.141592653589793;
    float z = 0.0f;
    bool flag = true;

    if (x > 10) {
        cout << "The value of x is greater than 10." << endl;
    } else {
        cout << "The value of x is not greater than 10." << endl;
    }

    y = std::max(x, y);
    z += y;

    if (flag && !x) {
        cout << "Condition 2 is true and condition 3 is false." << endl;
    } else {
        cout << "Condition 2 is not true or condition 3 is false." << endl;
    }

    return 0;
}
