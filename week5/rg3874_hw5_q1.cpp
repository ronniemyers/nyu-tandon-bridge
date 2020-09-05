/* returns the n-th element of the Fibonacci sequence */

#include <iostream>
using namespace std;

int fib(int n);

int main() {
    int num, fibElement;

    cout << "Please enter a positive integer: ";
    cin >> num;
    fibElement = fib(num);
    cout << fibElement;
    return 0;
}

int fib(int n){
    if (n == 0) {
        return 0;
    } else if (n < 3) {
        return 1;
    }

    int valOne = 1, valTwo = 1, valCurrent = 0;
    for (int position = 3; position <= n; position++) {
        valCurrent = valOne + valTwo;
        valOne = valTwo;
        valTwo = valCurrent;
    }
    return valCurrent;
}