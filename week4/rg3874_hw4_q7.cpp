/* reads a positive integer n from the user and prints out a nxn multiplication table */

#include <iostream>
using namespace std;

int main() {
    int n, lineNumber, count, product;
    
    cout << "Please enter a positive integer:" << endl;
    cin >> n;
    for (lineNumber = 1; lineNumber <= n; lineNumber++) {
        for (count = 1; count <= n; count++) {
            product = (count * lineNumber);
            cout << product;
            cout << "\t";
        }
        cout << endl;
    }
    
    return 0;
}