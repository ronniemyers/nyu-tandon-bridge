/* prints a textual image of an hourglass made of 2n lines with asterisks */

#include <iostream>
using namespace std;

int main() {
    int n, lineNumber, count;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (lineNumber = 1; lineNumber <= n; lineNumber++) {
        for (count = 1; count <= lineNumber; count++) {
            cout << " ";
        }
        
        for (count = 0; count <= (2 * n) - (2 * lineNumber); count++) {
            cout << "*";
        }
        cout << endl;
    }

    for (lineNumber = 1; lineNumber <= n; lineNumber++) {
        for (count = 0; count <= n - lineNumber; count++) {
            cout << " ";
        }

        for (count = 1; count <= (2 * lineNumber) - 1; count++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}