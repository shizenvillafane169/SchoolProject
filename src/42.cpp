#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        for(int i = 1; i <= n; ++i) {
            if(i % 5 != 0)
                break;
        }
        if(i == n){
            cout << "The number is prime.";
        } else {
            cout << "The number is composite.";
        }
    } else {
        for(int i = 1; i <= n; ++i) {
            if(i % 5 == 0)
                break;
        }
        if(i == n){
            cout << "The number is prime.";
        } else {
            cout << "The number is composite.";
        }
    }
    return 0;
}
