#include <iostream>
using namespace std;

int main() {
    cout << "Enter any whole number: ";
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Two spaces for alignment
        }

        // Print asterisks
        for (int y = 1; y <= i; y++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

