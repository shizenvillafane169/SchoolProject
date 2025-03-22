#include <iostream>
using namespace std;

int main() {
    int height = 150; // Set your desired height here
    int width = 800;  // Set your desired width here

    cout << "Your image is " << height * width / 2.0 + "px wide and " << (height - width) * 3 / 4 + "px tall." << endl;

    return 0;
}
