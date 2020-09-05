/* reads a positive integer n, and prints the first n even numbers */

#include <iostream>
using namespace std;

int main() {
    cout << "section a: while loop" << endl;

    int n, evenNumber = 2;
    cout << "Please enter a positive integer: ";
    cin >> n;

    while (n > 0) {
        cout << evenNumber << endl;
        evenNumber += 2;
        n--;
    }

    cout << endl;

    cout << "section b: for loop" << endl;
    evenNumber = 2;
    cout << "Please enter a positive integer: ";
    cin >> n;

    for (n; n > 0; n--) {
        cout << evenNumber << endl;
        evenNumber += 2;
    }

    return 0;
}